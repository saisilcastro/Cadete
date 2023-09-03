/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:19:02 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/02 16:26:47 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mandatory/minitalk.h>
#define HIGH SIGUSR1
#define LOW SIGUSR2

t_talk	g_data;

static void	client_update(int signal, siginfo_t *i, void *data);
static void	client(t_talk *set, char *message);
static void	send_data(t_talk *set, char byte, size_t size);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		g_data.id = ft_atoi_base(*(argv + 1), 10);
		client(&g_data, *(argv + 2));
	}
	return (0);
}

static void	client(t_talk *set, char *message)
{
	struct sigaction	sa;

	if (!set || !message)
		return ;
	sa = (struct sigaction){0};
	sa.sa_sigaction = client_update;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	if (sigaction(SIGUSR1, &sa, NULL))
		ft_putstr_fd("error calling SIGUSR1\n", 1);
	if (sigaction(SIGUSR2, &sa, NULL))
		ft_putstr_fd("error calling SIGUSR2\n", 1);
	if (set->id <= 0)
		ft_putstr_fd("There's no PID like this\n", 1);
	while (*message)
		send_data(set, *message++, 8);
	send_data(set, '\n', 8);
}

void	send_data(t_talk *set, char byte, size_t size)
{
	size_t	bit;
	int		status;

	if (!set)
		return ;
	bit = -1;
	while (++bit < size)
	{
		set->enable = 1;
		if ((128 >> bit) & byte)
			status = HIGH;
		else
			status = LOW;
		if (kill(set->id, status))
			ft_putstr_fd("server has been shutdown\n", 1);
		while (set->enable)
			usleep(100);
	}
}

void	client_update(int signal, siginfo_t *i, void *context)
{
	if (signal == SIGUSR1 || signal == SIGUSR2)
		g_data.enable = 0;
	(void)i;
	(void)context;
}
