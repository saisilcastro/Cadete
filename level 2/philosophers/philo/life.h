/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:24:52 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/05 22:13:16 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIFE_H
# define LIFE_H

# include <chained_of.h>
# include <philo.h>
# include <pthread.h>

typedef struct s_agenda	t_agenda;
struct s_agenda{
	double	eat;
	double	sleep;
	double	die;
	double	think;
	int		eat_times;
};

extern void	agenda_set(t_agenda *set, double eat, double sleep, double die);

typedef struct s_life	t_life;
struct s_life{
	pthread_mutex_t	run;
	t_agenda		action[1];
	t_chained		*man;
	t_philo			*philo;
	int				max_philo;
	int				running;
};

struct s_a{
	t_life *life;
	int filo_id;
};

extern void	life_set(t_life *set);
extern void	life_command(t_life *set, char **command);
extern void	life_update(t_life *set);
extern void	life_pop(t_life *set);

#endif