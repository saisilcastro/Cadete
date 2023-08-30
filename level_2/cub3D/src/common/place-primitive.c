/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-primitive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/30 17:40:06 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <math.h>

int	sign(int number)
{
	if (number < 0)
		return (-1);
	else if (number > 0)
		return (1);
	return (0);
}

void	straight_w(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d	i;

	if (!set)
		return ;
	i = vi2d_start(b.x - 1, b.y);
	while (++b.x < e.x)
		place_map_pixel(set, i.x, i.y, c);
}

void	straight_h(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d	i;

	if (!set)
		return ;
	i = vi2d_start(b.x, b.y - 1);
	while (++b.y < e.y)
		place_map_pixel(set, i.x, i.y, c);
}

void	line_low(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	int		slope;
	int		error;
	int		error_inc;
	int		inc_x;
	t_vi2d	i;

	if (!set)
		return ;
	slope = 2 * (abs(e.y - b.y));
	error = -abs(e.x - b.x);
	error_inc = -2 * abs(e.x - b.x);
	i = vi2d_start(b.x, b.y);
	inc_x = sign(e.x - b.x);
	while (i.x != e.x + inc_x)
	{
		place_map_pixel(set, i.x, i.y, c);
		error += slope;
		if (error >= 0)
		{
			i.y = sign(e.y - b.y);
			error += error_inc;
		}
		i.x += inc_x;
	}
}

void	line_high(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	int		slope;
	int		error;
	int		error_inc;
	int		inc_y;
	t_vi2d	i;

	if (!set)
		return ;
	slope = 2 * (abs(e.x - b.x));
	error = -(abs(e.x - b.x));
	error_inc = -2 * abs(e.y - b.y);
	i = vi2d_start(b.x, b.y);
	inc_y = sign(e.y - b.y);
	while (i.y != e.y + inc_y)
	{
		place_map_pixel(set, i.x, i.y, c);
		error += slope;
		i.y += inc_y;
		if (error >= 0)
		{
			i.x = sign(e.x - b.x);
			error += error_inc;
		}
		i.y += inc_y;
	}
}

void	place_draw_line(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d	delta;
	t_vi2d	inc;

	if (!set)
		return ;
	inc = vi2d_start(e.x - b.x, e.y - b.y);
	delta = vi2d_start(abs(e.x - b.x), abs(e.y - b.y));
	if (delta.y == 0)
		straight_w(set, b, e, c);
	else if (delta.x == 0)
		straight_h(set, b, e, c);
	else if (delta.x >= delta.y)
		line_low(set, b, e, c);
	else
		line_high(set, b, e, c);
}
