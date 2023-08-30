/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user-init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:38:43 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/30 17:31:13 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	user_init(t_place *set, void *data)
{
	t_vi2d		size;
	t_object	*obj;

	(void)data;
	if (!set)
		return ;
	size = vi2d_start(16, 16);
	set->image_next_last(set, set->image_create(set, 1, size, 0xFFFFFF));
	set->map_set(set, 0);
	obj = object_set(0, "dot", vi2d_start(0, 0), set->image_select(set, 1));
	obj->pos->x = (set->gear->size->x - obj->image->size->x) * 0.5;
	obj->pos->y = (set->gear->size->y - obj->image->size->y) * 0.5;
	set->object_next_last(set, obj);
}
