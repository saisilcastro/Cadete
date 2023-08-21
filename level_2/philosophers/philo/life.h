/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:24:52 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 17:23:58 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIFE_H
# define LIFE_H

# include <stdlib.h>
# include <chained_of.h>
# include <pthread.h>

typedef struct s_agenda	t_agenda;
struct s_agenda{
	double	eat;
	double	sleep;
	double	think;
	double	die;
	int		eat_times;
};

extern void	agenda_set(t_agenda *set, double eat, double sleep, double die);

typedef struct s_life	t_life;
struct s_life{
	pthread_t		*state;
	pthread_mutex_t	change;
	t_agenda		action[1];
	t_chained		*thinker;
	t_chained		*man;
	int				max_philo;
	int				disposable_fork;
	char			died;
};

extern void	life_set(t_life *set);
extern void	life_command(t_life *set, char **command);
extern int	life_take_fork(t_life *set, t_chained *prev,
				t_chained *thinker, t_chained *next);
extern void	life_update(t_life *set);
extern void	life_pop(t_life *set);

#endif