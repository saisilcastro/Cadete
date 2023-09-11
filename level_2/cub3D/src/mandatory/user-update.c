/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user-update.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 00:03:07 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/09 09:19:46 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>
#include <mlx.h>
#include <stdio.h>
#include <math.h>

static void	mouse_radius(t_place *set, t_vi2d pos)
{
	t_vi2d	begin;
	t_vi2d	end;
	t_vf2d	normal;
	float	angle;

	if (!set)
		return ;
	begin = vi2d_start(pos.x, pos.y);
	end = vi2d_start(set->gear->mouse->x, set->gear->mouse->y);
	set->draw_line(set, begin, end, pixel_rgb_local(0, 0, 255));
}

static void	dot_input(t_place *set)
{
	t_object	*dot;

	dot = set->object_select(set, 0);
	if (set->key_down(set, KEY_LEFT))
	{
		dot->pos->x -= dot->vel->x;
	}
	if (set->key_down(set, KEY_RIGHT))
	{
		dot->pos->x += dot->vel->x;
	}
	if (set->key_down(set, KEY_UP))
	{
		dot->pos->y -= dot->vel->y;
	}
	if (set->key_down(set, KEY_DOWN))
	{
		dot->pos->y += dot->vel->y;
	}
}

int	user_update(t_place *set)
{
	t_object		*obj;
	t_mlx_plugin	*plugin;
	int				color;
	t_vi2d			i;

	if (!set)
		return (0);
	if (set->key_down(set, KEY_ESC))
		set->stop(set);
	obj = set->object_select(set, 0);
	dot_input(set);
	set->draw_bg(set);
	mouse_radius(set, obj->pos[0]);
	return (!set->destroy(set));
}
