/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo-status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:18:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/05 22:19:29 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	philo_has_taken(t_philo *set)
{
	if (!set)
		return (0);
	if (timer_get(set->does))
	{
		printf("%.0f %i has taken a fork\n", set->does->interval, set->id);
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
	if (timer_get(set->does))
	{
		printf("%.0f %i is %s\n", set->does->interval, set->id, msg_load(pos));
		return (1);
	}
	return (0);
}

int	philo_death(t_philo *set)
{
	if (!set)
		return (0);
	if (timer_get(set->death))
	{
		printf("%.0f %i died\n", set->death->interval, set->id);
		return (1);
	}
	printf("waiting...");
	return (0);
}
