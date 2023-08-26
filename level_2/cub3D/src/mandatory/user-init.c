/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user-init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:38:43 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/26 18:48:44 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub3D.h>

void	user_init(t_place *set, void *data)
{
	(void)data;
	if (!set)
		return ;
	set->image_next_last(set, set->image_create(set, 0,
			vi2d_start(set->gear->size->x, set->gear->size->y)));
	set->map_set(set, 0);
}
