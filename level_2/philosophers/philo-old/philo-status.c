/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo-status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:18:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/23 17:15:20 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static char	*msg_load(int pos)
{
	if (pos == 0)
		return ("eating");
	else if (pos == 1)
		return ("sleeping");
	return ("thinking");
}

int	philo_is(t_philo *set, long acc)
{
	static char	show[1024];

	if (!set)
		return (0);
	if (!show[set->id])
	{
		if (set->action == FLOATING)
			set->action = EATING;
		if (set->action == EATING)
			printf("%lu %i has taken a fork\n",
				set->wait[set->action - 1].begin - acc,
				set->id + 1);
		if (set->action != FLOATING)
		printf("%lu %i is %s\n", set->wait[set->action - 1].begin - acc,
			set->id + 1, msg_load(set->action - 1));
		show[set->id] = 1;
	}
	if (set->action != FLOATING && timer_get(&set->wait[set->action - 1]))
	{
		set->action++;
		if (set->action > THINKING)
			set->action = EATING;
		show[set->id] = 0;
		return (1);
	}
	return (0);
}

int	philo_died(t_philo	*set, long acc)
{
	if (!set)
		return (0);
	if (timer_get(set->died))
	{
		printf("%lu %i has died\n",
				set->died->begin - acc,
				set->id + 1);
		return (1);
	}
	return (0);
}
