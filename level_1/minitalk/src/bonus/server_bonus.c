/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:18:52 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/27 11:18:34 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus/minitalk_bonus.h>
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

static void	server_update(int signal, siginfo_t *i, void *data)
{
	static unsigned char	byte;
	static unsigned char	bit;

	(void)data;
	if (signal == HIGH)
		byte |= (128 >> bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(byte, 1);
		if (byte == '\0')
			kill(i->si_pid, SIGUSR2);
		byte = 0;
		bit = 0;
	}
	if (kill(i->si_pid, HIGH))
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
