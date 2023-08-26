/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:39:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/26 19:12:19 by lde-cast         ###   ########.fr       */
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

void	place_map_set(t_place *set, int id)
{
	t_image	*image;

	if (!set || !set->gear->image)
		return ;
	image = set->image_select(set, id);
	if (image)
	{
		if (!set->gear->bg->image)
		{
			set->gear->bg->image = set->image_create(set, 0, vi2d_start(set->gear->size->x, set->gear->size->y));
			printf("%i %i\n", set->gear->bg->image->size->x, set->gear->bg->image->size->y);
		}
		//set->gear->bg->image = image;
	}
}
