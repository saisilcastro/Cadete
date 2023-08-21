/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:32:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 11:13:52 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <philo.h>
#include <utils.h>

void	life_set(t_life *set)
{
	if (!set)
		return ;
	set->state = NULL;
	set->thinker = NULL;
	set->man = NULL;
	set->max_philo = 0;
	set->disposable_fork = 0;
	set->died = 0;
	agenda_set(set->action, 0, 0, 0);
	//pthread_mutex_init(&set->change, NULL);
}

void	life_pop(t_life *set)
{
	if (!set)
		return ;
	if (set->state)
		free(set->state);
	chained_pop(&set->thinker, philo_pop);
	//pthread_mutex_destroy(&set->change);
	//pthread_exit(NULL);
}
