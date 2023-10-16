/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_of.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:02:05 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/14 18:09:24 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_OF_H
# define MATH_OF_H

typedef struct s_vi2d	t_vi2d;
struct s_vi2d
{
	int	x;
	int	y;
};

extern t_vi2d	vi2d_start(int x, int y);

typedef struct s_vf2d	t_vf2d;
struct s_vf2d
{
	float	x;
	float	y;
};

extern t_vf2d	vf2d_start(float x, float y);

# endif