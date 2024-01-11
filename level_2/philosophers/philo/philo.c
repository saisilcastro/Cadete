/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:07:58 by lde-cast          #+#    #+#             */
/*   Updated: 2024/01/11 15:32:26 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>
#include <string.h>
#include <stdio.h>

t_life	*life_get(void)
{
	static t_life	life;

	return (&life);
}

void	life_set(t_life *set)
{
	set->alive = On;
}

void	life_is_going(t_life *set, char **argv)
{
	life_command(set, argv);
	while (set->alive)
	{
	}
}
