/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-draw-bg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:14:32 by lde-cast          #+#    #+#             */
/*   Updated: 2023/07/21 14:54:30 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>

static void	map_lock(t_place *set)
{
	t_vi2d	limit;

	if (!set || !set->gear->bg->image)
		return ;
	limit.x = set->gear->bg->image->size->x - set->gear->size->x;
	limit.y = set->gear->bg->image->size->y - set->gear->size->y;
	if (set->gear->bg->pos->x < 0)
		set->gear->bg->pos->x = 0;
	if (set->gear->bg->pos->x > limit.x)
		set->gear->bg->pos->x = limit.x;
	if (set->gear->bg->pos->y < 0)
		set->gear->bg->pos->y = 0;
	if (set->gear->bg->pos->y > limit.y)
		set->gear->bg->pos->y = limit.y;
}

void	place_draw_sub_bg(t_place *set, int id, t_vi2d begin)
{
	t_image	*image;
	t_vi2d	pos;
	t_pixel	px;
	int		i;

	image = set->image_select(set, id);
	if (!set || !image || !set->gear->bg->image)
		return ;
	i = -1;
	while (++i < image->size->x * image->size->y)
	{
		pos.x = (i % image->size->x);
		pos.y = (i / image->size->x);
		pixel_from_abgr(&px, image_color_int(image, pos.x, pos.y));
		pixel_to_int(set->gear->bg->image, &px,
			vi2d_start(begin.x + pos.x, begin.y + pos.y));
	}
}

void	place_draw_bg(t_place *set)
{
	t_mlx_plugin	*plugin;
	void			*buffer;
	int				x;
	int				y;

	if (!set)
		return ;
	if (set->gear->up->system == SYSTEM_MINILIBX)
	{
		plugin = set->gear->plugin;
		mlx_clear_window(plugin->mlx, plugin->window);
		map_lock(set);
		if (set->gear->bg->image && set->gear->bg->image->buffer)
		{
			buffer = set->gear->bg->image->buffer;
			x = -set->gear->bg->pos->x;
			y = -set->gear->bg->pos->y;
			mlx_plugin_draw(set->gear, buffer, vi2d_start(x, y));
		}
	}
	set->draw(set);
}
