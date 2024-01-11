/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:11:06 by lde-cast          #+#    #+#             */
/*   Updated: 2024/01/11 15:19:04 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>

extern unsigned long	pl_atoul_base(char *str, unsigned char base);

typedef enum e_status	t_status;
enum e_status{
	Off,
	On
};

typedef struct s_timer	t_timer;
struct s_timer{
	long		begin;
	long		interval;
};

extern void				timer_start(t_timer *set, unsigned long interval);
extern long				timer_elapsed(t_timer *set);
extern int				timer_get(t_timer *set);
extern void				timer_set(t_timer *set);

typedef enum e_hand		t_hand;
enum e_hand{
	LEFT_HAND,
	RIGHT_HAND
};

typedef struct s_philo	t_philo;
struct s_philo{
	int			id;
	t_timer		wait[3];
	t_timer		die[1];
	unsigned	hand: 2;
};

extern void				philo_timer_init(t_philo *set,
							t_timer *wait, t_timer *die);

typedef struct s_action	t_action;
struct s_action{
	long	die;
	long	eat;
	long	sleep;
	int		eat_max;
};

typedef struct s_life	t_life;
struct s_life{
	t_philo		*philo;
	pthread_t	*state;
	int			philo_max;
	t_action	action[1];
	t_status	alive;
};

extern t_life			*life_get(void);
extern void				life_set(t_life *set);
extern void				life_is_going(t_life *set, char **argv);
extern void				life_command(t_life *set, char **argv);

#endif