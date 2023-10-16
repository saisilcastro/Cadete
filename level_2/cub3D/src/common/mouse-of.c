/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse-of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:22:35 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 10:24:21 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mouse_of.h>

void	mouse_of_set(t_mouse *set, int x, int y, unsigned int button)
{
	if (!set)
		return ;
	set->x = x;
	set->y = y;
	set->button = button;
	set->wheel = 0x00;
}