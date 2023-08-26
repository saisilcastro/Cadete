/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:42:59 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/25 20:08:07 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>
#include <stdlib.h>
#include <stdio.h>

t_philo	*philo_push(int id, long eat, long sleep, long died)
{
	t_philo	*set;

	set = (t_philo *)malloc(sizeof(t_philo));
	if (!set)
		return (NULL);
	set->id = id;
	set->hand = 0x1;
	set->action = FLOATING;
	timer_start(&set->wait[0], eat);
	timer_start(&set->wait[1], sleep);
	if ((eat + sleep) * 0.5 > 0)
		timer_start(&set->wait[2], (eat + sleep) * 0.5);
	else
		timer_start(&set->wait[2], 1000);
	timer_start(set->died, died);
	return (set);
}

void	philo_set(t_philo *set, int id, long eat, long died)
{
	if (!set)
		return ;
	set->id = id;
	set->hand = 0x1;
	set->action = 0x0;
	set->wait[0].interval = eat;
	set->died->interval = died;
}

int	philo_hand(t_philo *set, t_hand hand)
{
	if (!set || !set->hand)
		return (0);
	if (set->hand & (1 << hand))
		return (1);
	return (0);
}

void	philo_pop(void **set)
{
	if (!*set)
		return ;
	free(*set);
	*set = NULL;
}
