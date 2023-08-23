/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer_of.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:03:49 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/22 16:31:05 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMER_OF_H
# define TIMER_OF_H

# include <sys/time.h>

typedef struct s_timer	t_timer;
struct s_timer{
	long		begin;
	long		interval;
};

extern void	timer_start(t_timer *set, unsigned long interval);
extern long	timer_elapsed(t_timer *set);
extern int	timer_get(t_timer *set);
extern void	timer_set(t_timer *set);

#endif