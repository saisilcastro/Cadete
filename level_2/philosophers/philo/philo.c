/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:42:59 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 17:52:57 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>
#include <stdlib.h>
#include <stdio.h>

t_philo	*philo_push(unsigned int id, unsigned int hand,
	double eat, double died)
{
	t_philo	*set;

	set = (t_philo *)malloc(sizeof(t_philo));
	if (!set)
		return (NULL);
	set->id = id;
	set->hand = hand;
	timer_start(&set->wait[0], eat);
	timer_start(set->died, died);
	return (set);
}

void	philo_set(t_philo *set, unsigned int id, double interval, double died)
{
	if (!set)
		return ;
	set->id = id;
	set->hand = 0x1;
	set->wait[0].interval = interval;
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
