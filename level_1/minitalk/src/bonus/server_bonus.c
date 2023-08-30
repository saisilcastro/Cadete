/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:18:52 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/29 13:34:22 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus/minitalk_bonus.h>
#include <stdio.h>
#define HIGH SIGUSR1

static void	server_begin(void);
static void	server(void);

int	main(void)
{
	server();
	return (0);
}

static void	server_begin(void)
{
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_base_fd(getpid(), 10, 1, 1);
	ft_putchar_fd('\n', 1);
}

static void	server_update(int signal, siginfo_t *i, void *context)
{
	static unsigned char	byte;
	static unsigned char	bit;
	t_talk					send;

	(void)context;
	if (signal == HIGH)
		byte |= (128 >> bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(byte, 1);
		byte = 0;
		bit = 0;
	}
	send.id = i->si_pid;
	send.enable = 1;
	send.data = "hello fucking client";
	while (*send.data)
	{
		send_data(&send, *send.data, 8);
		send.data++;
	}
	if (signal == SIGUSR1 || signal == SIGUSR2)
		send.enable = 0;
	if (kill(i->si_pid, signal))
		ft_putstr_fd("error fucking things up\n", 1);
}

void	server(void)
{
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = server_update;
	server_begin();
	if ((sigaction(SIGUSR1, &sa, 0)) == -1)
		ft_putstr_fd("error calling SIGUSR1\n", 1);
    if ((sigaction(SIGUSR2, &sa, 0)) == -1)
        ft_putstr_fd("error calling SIGUSR2\n", 1);
    while (1)
        pause();
}
