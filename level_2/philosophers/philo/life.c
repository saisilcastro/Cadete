/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:32:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/30 23:45:38 by mister-code      ###   ########.fr       */
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
	agenda_set(set->action, 0, 0, 0);
	pthread_mutex_init(&set->change, NULL);
	set->died = 0;
}

void	life_pop(t_life *set)
{
	if (!set)
		return ;
	if (set->state)
		free(set->state);
	chained_pop(&set->thinker, philo_pop);
	pthread_mutex_destroy(&set->change);
	//pthread_exit(NULL);
}
