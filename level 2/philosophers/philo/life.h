/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:24:52 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/29 22:30:41 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIFE_H
# define LIFE_H

# include <chained_of.h>

typedef struct s_agenda	t_agenda;
struct s_agenda{
	double	eat;
	double	sleep;
	double	die;
};

extern void	agenda_set(t_agenda *set, double eat, double sleep, double die);

typedef struct s_life	t_life;
struct s_life{
	t_agenda	action[1];
	t_chained	*man;
	int			max_philo;
};

extern void	life_set(t_life *set);
extern void	life_command(t_life *set, char **command);
extern void	life_update(t_life *set);
extern void	life_pop(t_life *set);

#endif