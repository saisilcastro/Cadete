/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:36:53 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/23 16:03:27 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <timer_of.h>
# include <stdio.h>

typedef enum e_hand{
	LEFT_HAND,
	RIGHT_HAND
}t_hand;

typedef enum e_action{
	FLOATING,
	EATING,
	SLEEPING,
	THINKING
}t_action;

typedef struct s_philo	t_philo;
struct s_philo{
	int				id;
	t_timer			wait[3];
	t_timer			died[1];
	t_action		action;
	unsigned		hand:RIGHT_HAND + 1;
};

extern t_philo	*philo_push(int id, long eat, long sleep, long died);
extern void		philo_set(t_philo *set, int id, long eat, long died);
extern int		philo_hand(t_philo *set, t_hand hand);
extern int		philo_is(t_philo *set, long begin);
extern int		philo_died(t_philo	*set, long begin);
extern void		philo_pop(void **set);

#endif