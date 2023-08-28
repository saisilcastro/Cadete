/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx-focus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:05:18 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/28 13:06:05 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <machine.h>
#include <mlx_plugin.h>

int	mlx_focus_in(t_machine *set)
{
	set->event |= (1 << MACHINE_FOCUS_IN);
	return (1);
}

int	mlx_focus_out(t_machine *set)
{
	set->event &= ~(1 << MACHINE_FOCUS_IN);
	return (1);
}
