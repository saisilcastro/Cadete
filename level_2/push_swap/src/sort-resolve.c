/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-resolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:48:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/20 17:09:51 by lde-cast         ###   ########.fr       */
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

void	little_sort(t_sort *set)
{
	int	i;

	while (set->a_max > 3 && !is_sorted(set))
	{
		i = stack_pos(set->a, stack_min(set->a));
		if (i > set->a_max / 2)
			up_half(set, i);
		else
			down_half(set, i);
	}
	stack_sort_three(&set->a, 'a');
	while (set->b_max)
		sort_push(set, 'a');
}

int	sort_resolve(t_sort *set)
{
	if (is_sorted(set))
		return (1);
	if (!set || set->b_max > 0)
		return (0);
	if (set->a_max <= 5)
		little_sort(set);
	else
	{
		sort_push(set, 'b');
		sort_push(set, 'b');
		sort_cheaper(set);
	}
	return (1);
}
