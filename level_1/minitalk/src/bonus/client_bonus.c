/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:18:47 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/29 13:25:13 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus/minitalk_bonus.h>
#include <stdio.h>

t_talk	data;

static void client(t_talk *set, char *message);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%i\n", getpid());
		data.id = ft_atoi_base(*(argv + 1), 10);
		client(&data, *(argv + 2));
	}
	return (0);
}

static void	client_update(int signal, siginfo_t *i, void *context)
{
	if (signal == SIGUSR1 || signal == SIGUSR2)
		data.enable = 0;
	(void)i;
	(void)context;
}

static void client(t_talk *set, char *message)
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
