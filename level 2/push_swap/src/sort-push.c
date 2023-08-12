/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:48:33 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/11 15:34:22 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_pa(t_sort *set)
{
	if (!set || !set->b)
		return ;
	ft_printf("pa\n");
	stack_next_first(&set->a, stack_push(set->b->data));
	set->a_max++;
	set->b_max--;
	stack_pop_first(&set->b);
}

void	sort_pb(t_sort *set)
{
	if (!set || !set->a)
		return ;
	ft_printf("pb\n");
	stack_next_first(&set->b, stack_push(set->a->data));
	set->a_max--;
	set->b_max++;
	stack_pop_first(&set->a);
}