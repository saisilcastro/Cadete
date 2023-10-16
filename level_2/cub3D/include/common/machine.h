/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   machine.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:20:40 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 10:35:19 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACHINE_H
# define MACHINE_H

#include <MLX42/MLX42.h>
#include <system_of.h>
#include <mouse_of.h>
#include <object_of.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_machine t_machine;
struct s_machine
{
	mlx_t		*plugin;
	t_object	bg[1];
	t_status	key[255];
	t_mouse		mouse[1];
};

extern void		machine_set(t_machine *set);
extern t_status	machine_start(t_machine *set, int32_t w, int32_t h, char *title, bool resize);

# endif