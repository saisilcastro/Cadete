/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:22:54 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/27 21:26:53 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>

static void	place_function(t_place *set);

void	place_set(t_place *set, t_SystemSet up, t_vi2d size)
{
	if (!set)
		return ;
	machine_set(set->gear, up, "machine", vi2d_start(size.x, size.y));
	set->collect->current = 0;
	set->collect->max = 0;
	set->step = 0;
	place_function(set);
}

static t_status	place_start(t_place *set)
{
	if (!set)
		return (Off);
	return (machine_start(set->gear));
}

static void	place_function(t_place *set)
{
	if (!set)
		return ;
	set->start = place_start;
	set->image_create = place_image_create;
	set->image_load = place_image_load;
	set->image_select = place_image_select;
	set->image_next_first = place_image_next_first;
	set->image_next_last = place_image_next_last;
	set->object_select = place_object_select;
	set->object_next_first = place_object_next_first;
	set->object_next_last = place_object_next_last;
	set->map_create = place_map_create;
	set->map_set = place_map_set;
	set->map_limit = place_map_limit;
	set->draw_line = place_draw_line;
	set->draw_sub_bg = place_draw_sub_bg;
	set->draw_bg = place_draw_bg;
	set->draw = place_draw;
	set->init = NULL;
	set->key_down = place_key_down;
	set->run = place_run;
	set->update = NULL;
	set->stop = place_stop;
	set->destroy = place_destroy;
	set->pop = place_pop;
}
