/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:36:53 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 15:49:49 by lde-cast         ###   ########.fr       */
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

typedef struct s_philo	t_philo;
struct s_philo{
	int				id;
	t_timer			wait[3];
	t_timer			died[1];
	unsigned		hand:RIGHT_HAND + 1;
};

extern t_philo	*philo_push(unsigned int id, unsigned int hand,
					double interval, double died);
extern void		philo_set(t_philo *set, unsigned int id,
					double interval, double died);
extern int		philo_hand(t_philo *set, t_hand hand);
extern int		philo_is(t_philo *set, int pos);
extern int		philo_died(t_philo *set);
extern void		philo_pop(void **set);

#endif