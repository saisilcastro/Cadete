/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:41:41 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 12:45:29 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLACE_H
# define PLACE_H

#include <machine.h>
#include <math_of.h>

typedef struct s_place	t_place;
struct s_place
{
	t_machine	gear[1];
	t_status 	(*start)(t_place *, t_vi2d size, char *title, bool resize);
	void		(*init)(t_place *);
	void		(*update)(t_place *);
	void		(*run)(t_place *set);
};

extern void place_set(t_place *set);
extern void	place_run(t_place *set);

#endif