/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   machine-draw.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:11:03 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/21 11:58:04 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <machine.h>
#include <mlx_plugin.h>
#include <stdio.h>

t_status	is_croma(t_pixel *set, unsigned char alpha)
{
	if ((set && set->r == 255 && set->g == 0 && set->b == 255)
		|| (set && set->a == alpha))
		return (On);
	return (Off);
}

t_status	is_in_background(t_machine *set, t_object *obj)
{
	if (!set || !set->bg->image || !obj
		|| obj->pos->x < set->bg->pos->x
		|| obj->pos->y < set->bg->pos->y
		|| obj->pos->x > set->bg->pos->x + set->bg->image->size->x
		|| obj->pos->y > set->bg->pos->y + set->bg->image->size->y)
		return (Off);
	return (On);
}

void	xpm_to_alpha(t_machine *set, t_object *obj)
{
	int		x;
	int		y;
	t_pixel	px;

	if (!set || !set->bg->image || !is_in_background(set, obj))
		return ;
	y = -1;
	while (++y < obj->image->size->y
		&& obj->pos->y + y >= 0 && obj->pos->y + y <= set->bg->image->size->y)
	{
		x = -1;
		while (++x < obj->image->size->x
			&& obj->pos->x + x >= 0
			&& obj->pos->x + x <= set->bg->image->size->x)
		{
			pixel_from_abgr(&px, image_color_int(obj->image, x, y));
			if (is_croma(&px, 255))
			{
				pixel_from_abgr(&px, image_color_int(set->bg->image,
						obj->pos->x + x, obj->pos->y + y));
				px.a = 255;
				pixel_to_int(obj->image, &px, vi2d_start(x, y));
			}
		}
	}
}

void	machine_draw(t_machine	*set, t_object *obj)
{
	int			x;
	int			y;

	if (!set)
		return ;
	if (set->up->system == SYSTEM_MINILIBX
		&& obj->status & (1 << OBJECT_VISIBLE))
	{
		x = obj->pos->x - set->bg->pos->x;
		y = obj->pos->y - set->bg->pos->y;
		xpm_to_alpha(set, obj);
		mlx_plugin_draw(set, obj->image->buffer, vi2d_start(x, y));
	}
}
