/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx-plugin-image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:33:47 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/27 09:46:57 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_plugin.h>
#include <stdio.h>

static void	mlx_image_paint(t_image **set, int color)
{
	int		i;
	t_vi2d	u;
	char	*dest;

	if (!set)
		return ;
	i = -1;
	while (++i < (*set)->size->x * (*set)->size->y)
	{
		u.x = i % (*set)->size->x;
		u.y = i / (*set)->size->x;
		dest = (*set)->addr + (u.y * (*set)->length + u.x * ((*set)->bpp / 8));
		*(unsigned int *)dest = color;
	}
}

t_status	mlx_image_create(t_image *set, void *mlx, int color)
{
	if (!set || !mlx)
		return (Off);
	set->buffer = mlx_new_image(mlx, set->size->x, set->size->y);
	if (set->buffer)
	{
		set->addr = mlx_get_data_addr(set->buffer, &set->bpp,
				&set->length, &set->endian);
		mlx_image_paint(&set, color);
		return (On);
	}
	return (Off);
}

t_status	mlx_image_load(t_image *set, void *mlx, char *path)
{
	if (!set || !path)
		return (Off);
	set->buffer = mlx_xpm_file_to_image(mlx, path,
			&set->size->x, &set->size->y);
	if (set->buffer)
	{
		set->addr = mlx_get_data_addr(set->buffer, &set->bpp,
				&set->length, &set->endian);
		return (On);
	}
	return (Off);
}

void	mlx_image_pop(t_image *set, void *display)
{
	if (!set)
		return ;
	if (set->buffer)
		mlx_destroy_image(display, set->buffer);
	free(set);
}
