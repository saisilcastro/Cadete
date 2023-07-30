/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:32:48 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/29 22:47:45 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <stdio.h>
#include <utils.h>

void	life_set(t_life *set)
{
	if (!set)
		return ;
	set->man = NULL;
	set->max_philo = 0;
	agenda_set(set->action, 0, 0, 0);
}

void	life_update(t_life *set)
{
	if (!set)
		return ;
}

void	life_pop(t_life *set)
{
	if (!set)
		return ;
	chained_pop(&set->man);
}
