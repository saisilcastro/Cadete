/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-image-process.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:14:55 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/27 09:35:28 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>

t_image	*place_image_create(t_place *set, int id, t_vi2d size, int color)
{
	t_image			*image;
	t_mlx_plugin	*plugin;

	if (set->gear->up->system == SYSTEM_MINILIBX)
	{
		plugin = set->gear->plugin;
		image = image_of_push(id, NULL, size);
		if (image && mlx_image_create(image, plugin->mlx, color))
			return (image);
	}
	return (NULL);
}

t_image	*place_image_load(t_place *set, char *path, int id)
{
	t_image			*image;
	t_mlx_plugin	*plugin;

	if (!set || !path)
		return (NULL);
	image = image_of_push(id, NULL, vi2d_start(16, 16));
	if (image)
	{
		plugin = set->gear->plugin;
		if (mlx_image_load(image, plugin->mlx, path))
			return (image);
		mlx_image_pop(image, plugin->mlx);
	}
	return (NULL);
}

t_image	*place_image_select(t_place *set, int id)
{
	t_chained	*update;
	t_image		*image;

	if (!set)
		return (NULL);
	update = set->gear->image;
	while (update)
	{
		image = update->data;
		if (image->id == id)
			return (image);
		update = update->next;
	}
	return (NULL);
}
