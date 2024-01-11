/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life-command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:03:29 by lde-cast          #+#    #+#             */
/*   Updated: 2024/01/11 15:33:03 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>
#include <stdio.h>

void	*life_action(void *data)
{
	t_philo		*man;
	static int	act;

	man = data;
	if (timer_get(&man->wait[act]))
	{
		timer_set(&man->wait[act]);
		act++;
		if (act > 2)
			act = 0;
	}
	return (NULL);
}

static inline t_status	life_create(t_life *set)
{
	t_timer	wait[3];
	t_timer	die[1];
	int		i;

	set->philo = malloc((set->philo_max + 1) * sizeof(t_philo));
	if (!set->philo)
		return (Off);
	set->state = malloc((set->philo_max + 1) * sizeof(pthread_t));
	if (!set->state)
		return (Off);
	i = 0;
	timer_start(&die[0], set->action->die);
	timer_start(&wait[0], set->action->eat);
	timer_start(&wait[1], set->action->sleep);
	timer_start(&wait[2], set->action->eat + set->action->sleep);
	while (i < set->philo_max)
	{
		set->philo[i].id = i;
		philo_timer_init(&set->philo[i], wait, die);
		if (pthread_create(&set->state[i], NULL,
				&life_action, &set->philo[i]) != 0)
			perror("failure creating pthread");
		i++;
	}
	return (On);
}

void	life_command(t_life *set, char **argv)
{
	int	i;

	i = 0;
	argv++;
	while (*argv)
	{
		if (i == 0)
			set->philo_max = pl_atoul_base(*argv, 10);
		else if (i == 1)
			set->action->die = pl_atoul_base(*argv, 10);
		else if (i == 2)
			set->action->eat = pl_atoul_base(*argv, 10);
		else if (i == 3)
			set->action->sleep = pl_atoul_base(*argv, 10);
		argv++;
		i++;
	}
	if (!life_create(set))
		set->alive = Off;
}
