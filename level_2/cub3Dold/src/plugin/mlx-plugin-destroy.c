/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx-plugin-destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 07:36:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/20 19:40:30 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx_plugin.h>
#include <stdio.h>

int	mlx_destroy_plugin(t_machine *set)
{
	if (!set)
		return (0);
	set->event &= ~(1 << MACHINE_RUNNING);
	return (1);
}
