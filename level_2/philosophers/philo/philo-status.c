/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo-status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:18:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 16:03:00 by lde-cast         ###   ########.fr       */
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

int	philo_is(t_philo *set, int pos)
{
	static char	show[128];

	if (!set)
		return (0);
	if (!show[set->id])
	{
		if (pos == 0)
			printf("%.0f %i has taken a fork\n", set->wait[pos].interval,
				set->id);
		printf("%.0f %i is %s\n", set->wait[pos].interval, set->id,
			msg_load(pos));
		show[set->id] = 1;
	}
	if (timer_get(&set->wait[pos]))
	{
		show[set->id] = 0;
		return (1);
	}
	return (0);
}
