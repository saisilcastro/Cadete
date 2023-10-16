/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user-image-animation_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:21:42 by lde-cast          #+#    #+#             */
/*   Updated: 2023/07/24 19:00:32 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long_bonus.h>
#define LIMIT 0xAF

void	hero_animation(t_place *set, t_object *obj)
{
	if (!set || !obj)
		return ;
	if (obj->where == NORTH)
		obj->image = set->image_select(set, TWINSEN_BACK);
	else if (obj->where == NORTHEAST)
		obj->image = set->image_select(set, TWINSEN_DG_BACK);
	else if (obj->where == NORTHWEST)
		obj->image = set->image_select(set, TWINSEN_DG_BACK_LEFT);
	else if (obj->where == SOUTH)
		obj->image = set->image_select(set, TWINSEN_FRONT);
	else if (obj->where == SOUTHEAST)
		obj->image = set->image_select(set, TWINSEN_DG_FT);
	else if (obj->where == SOUTHWEST)
		obj->image = set->image_select(set, TWINSEN_DG_FT_LEFT);
	else if (obj->where == EAST)
		obj->image = set->image_select(set, TWINSEN_SIDE);
	else if (obj->where == WEST)
		obj->image = set->image_select(set, TWINSEN_SIDE_LEFT);
}

void	enemy_animation(t_place	*set, t_object *obj)
{
	static int	pos;

	if (!set || !obj)
		return ;
	if (pos == LIMIT / 8)
		obj->image = set->image_select(set, ENEMY_ONE);
	else if (pos == LIMIT / 7)
		obj->image = set->image_select(set, ENEMY_TWO);
	else if (pos == LIMIT / 6)
		obj->image = set->image_select(set, ENEMY_THREE);
	else if (pos == LIMIT / 5)
		obj->image = set->image_select(set, ENEMY_FOUR);
	else if (pos == LIMIT / 4)
		obj->image = set->image_select(set, ENEMY_FIVE);
	else if (pos == LIMIT / 3)
		obj->image = set->image_select(set, ENEMY_SIX);
	else if (pos == LIMIT / 2)
		obj->image = set->image_select(set, ENEMY_SEVEN);
	else if (pos == 0)
		obj->image = set->image_select(set, ENEMY_EIGHT);
	pos++;
	if (pos >= LIMIT)
		pos = 0;
}
