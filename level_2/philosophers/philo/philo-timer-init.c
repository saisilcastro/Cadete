/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo-timer-init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:57:45 by lde-cast          #+#    #+#             */
/*   Updated: 2024/01/11 15:18:42 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	philo_timer_init(t_philo *set, t_timer *wait, t_timer *die)
{
	timer_start(&set->die[0], die->interval);
	timer_start(&set->wait[0], wait[0].interval);
	timer_start(&set->wait[1], wait[1].interval);
	timer_start(&set->wait[2], wait[2].interval);
	printf("die: %lu\n", set->die->interval);
}
