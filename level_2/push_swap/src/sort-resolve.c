/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-resolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:48:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/02 20:49:58 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

void	temp(t_sort *set)
{
	int	pos;

	if (!set)
		return ;
	pos = stack_pos(set->a, stack_min(set->a));
	if (set->a_max - pos < set->a_max * 0.5)
		ft_printf("%i %i %i %i %i\n", set->a_max - pos, pos, set->a_max, stack_min(set->a), stack_max(set->a));
	else
		ft_printf("##%i %i %i %i %i\n", set->a_max - pos, pos, set->a_max, stack_min(set->a), stack_max(set->a));
}

void	up_half(t_sort *set, int i)
{
	sort_ra(set, i);
}

void	down_half(t_sort *set, int i)
{
	while (i > 0)
	{
		sort_rra(set, 0);
		i = stack_pos(set->a, stack_min(set->a));
	}
	i = stack_pos(set->a, stack_min(set->a));
	sort_push(set, 'a');
}

int	sort_resolve(t_sort *set)
{
	int	i;

	if (!set || set->b_max > 0)
		return (0);
	i = stack_pos(set->a, stack_min(set->a));
	while (set->a_max > 3)
	{
		if (i < (set->a_max / 2))
			up_half(set, i);
		else
			down_half(set, i);
	}
	return (1);
}
