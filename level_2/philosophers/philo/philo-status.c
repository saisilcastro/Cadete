/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo-status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 10:18:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/22 16:43:10 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static char	*msg_load(int pos)
{
	if (pos == 0)
		return ("eating");
	else if (pos == 1)
		return ("sleeping");
	return ("thinking\n");
}

int	philo_is(t_philo *set)
{

	if (!set)
		return (0);
	if (set->action == EATING)
		printf("%lu %i has taken a fork\n", timer_elapsed(&set->wait[set->action]),
			set->id);
	printf("%lu %i is %s\n", timer_elapsed(&set->wait[set->action]), set->id,
		msg_load(set->action));
	if (timer_get(&set->wait[set->action]))
	{
		set->action++;
		if (set->action > THINKING)
			set->action = EATING;
		return (1);
	}
	return (0);
}
