/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:39:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/27 22:11:37 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <stdio.h>

void	place_map_create(t_place *set, t_image *image)
{
	t_mlx_plugin	*plugin;

	if (!set || !set->gear->plugin)
		return ;
	if (set->gear->up->system == SYSTEM_MINILIBX)
	{
		if (image)
		{
			plugin = set->gear->plugin;
			chained_next_last(&set->gear->image, chained_push(image));
			set->map_set(set, image->id);
		}
	}
}

void	print_image(t_image *dst, t_image *src)
{
	int		i;
	char	*col[2];
	if (!dst || !src || dst->size->x < src->size->x
		|| dst->size->y < src->size->y)
		return ;
	i = -1;
	while (++i < dst->size->x * dst->size->y)
	{
		col[0] = src->addr + ((i / src->size->x) * src->length + (i % src->size->x) * (src->bpp / 8));
		col[1] = dst->addr + ((i / dst->size->x) * dst->length + (i % dst->size->x) * (dst->bpp / 8));
		*(unsigned int*)col[1] = *(unsigned int*)col[0];
	}
}

char	place_map_limit(t_place *set, t_vi2d min, t_vi2d max)
{
	t_vi2d	imax;

	if (!set || !set->gear->bg->image)
		return (0);
	imax.x = set->gear->bg->image->size->x - 1;
	imax.y = set->gear->bg->image->size->y - 1;
	if (min.x < 0 || max.x > imax.x || min.y < 0 || max.y > imax.y)
		return (0);
	return (1);
}

void	place_map_set(t_place *set, int id)
{
	t_image	*image;

	if (!set)
		return ;
	image = set->image_select(set, id);
	if (image)
	{
		if (!set->gear->bg->image)
			set->gear->bg->image = set->image_create(set, 0, vi2d_start(image->size->x, image->size->y), 0x00FFFFFF);
		print_image(set->gear->bg->image, image);
	}
	else
	{
		if (!set->gear->bg->image)
			set->gear->bg->image = set->image_create(set, 0, vi2d_start(set->gear->size->x, set->gear->size->y), 0x00000000);
	}
}
