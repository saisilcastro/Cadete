/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user-update.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 00:03:07 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/27 23:18:59 by mister-code      ###   ########.fr       */
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
	normal.x = ((end.x - begin.x) / (float)set->gear->size->x);
	normal.y = ((end.y - begin.y) / (float)set->gear->size->y) * -1;
	printf("%f %f\n", normal.x, normal.y);
	// set->draw_line(set, begin, end, pixel_rgba_local(255, 0, 0, 255));
}

int	user_update(t_place *set)
{
	if (!set)
		return (0);
	if (set->key_down(set, KEY_ESC))
		set->stop(set);
	mouse_radius(set, vi2d_start(set->gear->size->x / 2, set->gear->size->y / 2));
	set->draw_bg(set);
	return (!set->destroy(set));
}
