/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:48:33 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/12 21:33:25 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_push(t_sort *set, char stack)
{
	if (set)
	{
		if (stack == 'a' && set->b)
		{
			stack_push_message(&set->a, stack_push(set->b->data), &set->a_max, "pa\n");
			set->b_max--;
			stack_pop_first(&set->b);
		}
		else if(stack == 'b' && set->a)
		{
			stack_push_message(&set->b, stack_push(set->a->data), &set->b_max, "pb\n");
			set->a_max--;
			stack_pop_first(&set->a);
		}
	}
}
