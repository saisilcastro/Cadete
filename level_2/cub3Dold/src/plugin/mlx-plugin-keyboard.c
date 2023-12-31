/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx-plugin-keyboard.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:54:04 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/20 19:39:30 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <machine.h>
#include <linux_keyboard_of.h>
#include <mlx_plugin.h>
#include <stdio.h>

int	mlx_key_down(int keycode, t_machine *set)
{
	if (!set)
		return (-1);
	set->key[linux_key_get(keycode)] = On;
	return (0);
}

int	mlx_key_up(int keycode, t_machine *set)
{
	if (!set)
		return (-1);
	set->key[linux_key_get(keycode)] = Off;
	return (0);
}
