/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:48:33 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/02 14:35:46 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_push(t_sort *set, char stack)
{
	t_stack	*letter;

	if (set)
	{
		if (stack == 'a' && set->b)
		{
			letter = stack_push(set->b->data);
			stack_push_message(&set->a, letter, &set->a_max, "pa\n");
			set->b_max--;
			stack_pop_first(&set->b);
		}
		else if (stack == 'b' && set->a)
		{
			letter = stack_push(set->b->data);
			stack_push_message(&set->b, letter, &set->b_max, "pb\n");
			set->a_max--;
			stack_pop_first(&set->a);
		}
	}
}
