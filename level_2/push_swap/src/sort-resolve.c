/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-resolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:48:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/06 15:51:14 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

char	is_sorted(t_sort *set)
{
	t_stack	*sorted;

	if (!set || set->b_max)
		return (0);
	sorted = set->a;
	while (sorted)
	{
		if (sorted->next && sorted->data > sorted->next->data)
			return (0);
		sorted = sorted->next;
	}
	return (1);
}

void	up_half(t_sort *set, int i)
{
	while (i > 0)
	{
		sort_rra(set, 0);
		i = stack_pos(set->a, stack_min(set->a));
	}
	sort_push(set, 'b');
}

void	down_half(t_sort *set, int i)
{
	while (i > 0)
	{
		sort_ra(set, 0);
		i = stack_pos(set->a, stack_min(set->a));
	}
	sort_push(set, 'b');
}

int	sort_resolve(t_sort *set)
{
	int	i;

	if (is_sorted(set))
		return (1);
	if (!set || set->b_max > 0)
		return (0);
	i = stack_pos(set->a, stack_min(set->a));
	while (set->a_max > 3)
	{
		if (i < set->a_max / 2)
			up_half(set, i);
		else
			down_half(set, i);
	}
	stack_sort_three(&set->a, 'a');
	stack_print(set->a);
	while (set->b_max)
		sort_push(set, 'a');
	stack_print(set->a);
	return (1);
}
