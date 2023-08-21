/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer-of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:07:09 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 12:24:25 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <timer_of.h>
#include <stdio.h>
#include <stdlib.h>

void	timer_start(t_timer *set, double interval)
{
	if (!set)
		return ;
	set->interval = interval;
	gettimeofday(&set->last, NULL);
}

int	timer_get(t_timer *set)
{
	struct timeval	now;
	double			elapsed;
	double			begin;

	if (!set)
		return (0);
	gettimeofday(&now, NULL);
	begin = (now.tv_sec - set->last.tv_sec);
	elapsed = begin + ((now.tv_usec - set->last.tv_usec) * 1E-6);
	//printf("%lf %lf\n", elapsed, set->interval * 1E-3);
	if (elapsed < set->interval * 1E-3)
		return (0);
	timer_set(set);
	return (1);
}

void	timer_set(t_timer *set)
{
	if (!set)
		return ;
	gettimeofday(&set->last, NULL);
}
