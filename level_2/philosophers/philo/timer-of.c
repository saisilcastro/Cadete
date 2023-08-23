/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer-of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:07:09 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/23 12:41:22 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <timer_of.h>
#include <stdio.h>
#include <stdlib.h>

long	times_thousand(long i)
{
	return ((i << 10) - (i << 4) - (i << 3));
}

void	timer_start(t_timer *set, unsigned long interval)
{
	struct timeval	now;

	if (!set)
		return ;
	set->interval = interval;
	gettimeofday(&now, NULL);
	set->begin = (times_thousand(now.tv_sec) + (now.tv_usec * 1e-3));
}

int	timer_get(t_timer *set)
{
	struct timeval	now;
	long			end;

	if (!set)
		return (0);
	gettimeofday(&now, NULL);
	end = (times_thousand(now.tv_sec) + (now.tv_usec * 1e-3));
	//printf("%li %li\n", (end - set->begin), set->interval);
	if ((end - set->begin) < set->interval)
		return (0);
	timer_set(set);
	return (1);
}

long	timer_elapsed(t_timer *set)
{
	struct timeval	timer;
	long			now;

	gettimeofday(&timer, NULL);
	now = (times_thousand(timer.tv_sec) + (timer.tv_usec * 1e-3));
	return (now - set->begin);
}

void	timer_set(t_timer *set)
{
	struct timeval	begin;

	if (!set)
		return ;
	gettimeofday(&begin, NULL);
	set->begin = (times_thousand(begin.tv_sec) + (begin.tv_usec * 1e-3));
}
