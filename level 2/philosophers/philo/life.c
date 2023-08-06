/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:32:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/05 22:11:41 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <philo.h>
#include <utils.h>

void	life_set(t_life *set)
{
	if (!set)
		return ;
	set->man = NULL;
	set->philo = NULL;
	set->max_philo = 0;
	agenda_set(set->action, 0, 0, 0);
	pthread_mutex_init(&set->run, NULL);
	set->running = 1;
}

void	life_pop(t_life *set)
{
	if (!set)
		return ;
	chained_pop(&set->man, philo_pop);
	pthread_mutex_destroy(&set->run);
}
