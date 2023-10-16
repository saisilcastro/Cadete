/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   machine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:02:28 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 14:34:58 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <machine.h>

void	machine_set(t_machine *set)
{
	if (!set)
		return ;
	set->plugin = NULL;
	set->bg->img = NULL;
	mouse_of_set(&set->mouse[0], 0, 0, 0);
}

t_status	machine_start(t_machine *set, int32_t w, int32_t h, char *title, bool resize)
{
	if (!set)
		return (Off);
	set->plugin = mlx_init(w, h, title, resize);
	if (!set->plugin)
		return (Off);
	//mlx_get_mouse_pos(set->plugin, &set->mouse->x, &set->mouse->y);
	return (On);
}