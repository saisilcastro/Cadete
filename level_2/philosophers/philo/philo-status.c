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
	static char	show;

	if (!set)
		return (0);
	if (!show)
	{
		if (pos == 0)
			printf("%.0f %i has taken a fork\n", set->wait->interval, set->id);
		printf("%.0f %i is %s\n", set->wait->interval, set->id, msg_load(pos));
		show = 1;
	}
	if (timer_get(set->wait))
	{
		show = 0;
		return (1);
	}
	return (0);
}
