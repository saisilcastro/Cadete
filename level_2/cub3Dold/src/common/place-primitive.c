/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-primitive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/14 02:42:39 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <math.h>
#include <stdio.h>

t_vi2d	line_maker(t_vi2d b, t_vi2d e)
{
	static double	step;
	static t_vi2d	way;

	step += 0.0001;
	way.x = (1 - step) * b.x + step * e.x;
	way.y = (1 - step) * b.y + step * e.y;
	if (step >= (int)1)
		step = 0;
	return (way);
}

void	place_draw_line(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d			way;
	t_mlx_plugin	*plugin;
	int				color;

	plugin = set->gear->plugin;
	color = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
	way = vi2d_start(b.x, b.y);
	while (way.x != e.x)
	{
		way = line_maker(b, e);
		mlx_pixel_put(plugin->mlx, plugin->window, way.x, way.y, color);
	}
}
