/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:39:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/20 09:29:47 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>

void	place_map_create(t_place *set, int id, t_vi2d size)
{
	t_mlx_plugin	*plugin;
	t_image			*image;

	if (!set || !size.x || !size.y || !set->gear->plugin)
		return ;
	if (set->gear->up->system == SYSTEM_MINILIBX && id > -1)
	{
		image = image_of_push(id, NULL, size);
		if (image)
		{
			plugin = set->gear->plugin;
			mlx_create_image(image, plugin->mlx);
			chained_next_last(&set->gear->image, chained_push(image));
			set->map_set(set, 0);
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
		set->gear->bg->image = image;
}