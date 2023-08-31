/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-primitive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/31 17:50:40 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <math.h>

void	straight_w(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d			i;
	t_mlx_plugin	*plugin;
	int				color;

	if (!set)
		return ;
	plugin = set->gear->plugin;
	i = vi2d_start(b.x, b.y);
	color = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
	if (b.x < e.x)
	{
		while (i.x < e.x)
			mlx_pixel_put(plugin->mlx, plugin->window, i.x++, i.y, color);
	}
	if (b.x > e.x)
	{
		while (i.x > e.x)
			mlx_pixel_put(plugin->mlx, plugin->window, i.x--, i.y, color);
	}
}

void	straight_h(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d			i;
	t_mlx_plugin	*plugin;
	int				color;

	if (!set)
		return ;
	plugin = set->gear->plugin;
	i = vi2d_start(b.x, b.y);
	color = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
	if (b.y < e.y)
	{
		while (i.y < e.y)
			mlx_pixel_put(plugin->mlx, plugin->window, i.x, i.y++, color);
	}
	if (b.y > e.y)
	{
		while (i.y > e.y)
			mlx_pixel_put(plugin->mlx, plugin->window, i.x, i.y--, color);
	}
}

void	slow_h(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d			i;
	t_vi2d			delta;
	t_mlx_plugin	*plugin;
	int				color;
	int				step;

	if (!set)
		return ;
	plugin = set->gear->plugin;
	delta = vi2d_start(e.x - b.x, e.y - b.y);
	i = vi2d_start(b.x, b.y);
	color = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
	if (i.x < e.x)
	{
		printf("increasing slow h %i\n", delta.x);
		while (i.x < e.x)
		{
			step = (e.x - b.x) / (e.y - b.y);
			mlx_pixel_put(plugin->mlx, plugin->window, i.x++, i.y += step, color);
		}
	}
	else if (i.x > e.x)
	{
		printf("decreasing slow h %i###\n", i.x);
		while (i.x > e.x)
		{
			step = (e.x - b.x) / (e.y - b.y);
			mlx_pixel_put(plugin->mlx, plugin->window, i.x--, i.y -= step, color);
		}
	}
}

void	slow_w(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d			i;
	t_mlx_plugin	*plugin;
	int				color;
	int				step;

	if (!set)
		return ;
	plugin = set->gear->plugin;
	i = vi2d_start(b.x, b.y);
	color = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
	if (b.x < e.x)
	{
		while (i.x < e.x)
		{
			step = (e.y - b.y) / (e.x - b.x);
			mlx_pixel_put(plugin->mlx, plugin->window, i.x++, i.y += step, color);
		}
	}
	else if (b.x > e.x)
	{
		while (i.x > e.x)
		{
			step = (e.y - b.y) / (e.x - b.x) * -1;
			mlx_pixel_put(plugin->mlx, plugin->window, i.x--, i.y += step, color);
		}
	}
}

void	place_draw_line(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d	delta;

	delta = vi2d_start(abs(e.x - b.x), abs(e.y - b.y));
	if (!delta.y)
		straight_w(set, b, e, c);
	else if (!delta.x)
		straight_h(set, b, e, c);
	else if (delta.x > delta.y)
		slow_h(set, b, e, c);
	else
		slow_w(set, b, e, c);
}
