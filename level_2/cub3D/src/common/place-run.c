/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:41:07 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 12:54:49 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>

static void	mlx_plugin_run(t_place *set)
{
	if (set->update)
		mlx_loop_hook(set->gear->plugin, set->update, set);
}

void	place_run(t_place *set)
{
	if (!set)
		return ;
	if (set->init)
		set->init(set);
	mlx_plugin_run(set);
	if (set->update)
		set->update(set);
	mlx_loop(set->gear->plugin);
	mlx_terminate(set->gear->plugin);
}