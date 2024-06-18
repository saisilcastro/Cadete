/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-of.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:27:02 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/25 11:41:52 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <stdlib.h>

void	sort_set(t_sort	*set)
{
	if (!set)
		return ;
	set->a = NULL;
	set->b = NULL;
	set->a_max = 0;
	set->b_max = 0;
}

void	sort_pop(t_sort *set)
{
	if (!set)
		return ;
	stack_pop(&set->a);
	stack_pop(&set->b);
}
