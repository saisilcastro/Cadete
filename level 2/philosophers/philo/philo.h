/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:36:53 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/31 00:26:55 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <timer_of.h>
#include <stdio.h>

typedef enum e_hand{
	LEFT_HAND,
	RIGHT_HAND
}t_hand;

typedef struct s_philo	t_philo;
struct s_philo{
	int				id;
	pthread_t		state;
	t_timer			wait[1];
	unsigned		hand:RIGHT_HAND + 1;
};

extern t_philo	*philo_push(unsigned int id, unsigned hand, double interval);
extern void		philo_set(t_philo *set, unsigned int id, unsigned hand, double interval);
extern int		philo_hand(t_philo *set, t_hand hand);
extern int		philo_has_taken(t_philo *set);
extern int		philo_is(t_philo *set, int pos);
extern int		philo_died(t_philo *set);
extern void		philo_pop(void *set);

#endif