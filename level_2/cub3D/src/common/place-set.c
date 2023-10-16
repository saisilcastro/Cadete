/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:52:21 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 12:47:05 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>

static void	place_function(t_place *set);

void place_set(t_place *set)
{
	if (!set)
		return ;
	machine_set(&set->gear[0]);
	place_function(set);
	
}

static t_status	place_start(t_place *set, t_vi2d size, char *title, bool resize)
{
	if (!set)
		return (Off);
	return (machine_start(&set->gear[0], size.x, size.y, title, resize));
}

static void	place_function(t_place *set)
{
	set->start = place_start;
	set->init = NULL;
	set->update = NULL;
	set->run = place_run;
}