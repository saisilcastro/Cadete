/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo-status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:18:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/31 00:26:28 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	philo_has_taken(t_philo *set)
{
	if (!set)
		return (0);
	if (timer_get(set->wait))
	{
		printf("%.0f %i has taken a fork\n", set->wait->interval, set->id);
		return (1);
	}
	return (0);
}

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
	if (!set)
		return (0);
	if (timer_get(set->wait))
	{
		printf("%.0f %i is %s\n", set->wait->interval, set->id, msg_load(pos));
		return (1);
	}
	return (0);
}
