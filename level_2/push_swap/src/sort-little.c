/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:38 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/25 23:07:21 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

static void	up_half(t_sort *set, int i)
{
	while (i > 0)
	{
		sort_rra(set, 0);
		i = stack_pos(set->a, stack_shorter(set->a));
	}
	sort_push(set, 'b');
}

static void	down_half(t_sort *set, int i)
{
	while (i > 0)
	{
		sort_ra(set, 0);
		i = stack_pos(set->a, stack_shorter(set->a));
	}
	sort_push(set, 'b');
}

void	sort_little(t_sort *set)
{
	int	i;

	while ((set->a_max > 3 && (!is_sorted(set) || !a_sorted(set))))
	{
		i = stack_pos(set->a, stack_shorter(set->a));
		if (i > set->a_max / 2)
			up_half(set, i);
		else
			down_half(set, i);
	}
	if (!a_sorted(set))
		stack_sort_three(&set->a, 'a');
	while (set->b_max)
		sort_push(set, 'a');
}
