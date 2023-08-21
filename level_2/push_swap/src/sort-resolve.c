/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-resolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:48:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/19 20:30:44 by mister-code      ###   ########.fr       */
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

int	sort_resolve(t_sort *set)
{
	t_stack	*a;

	if (!set || set->b_max > 0)
		return (0);
	a = set->a;
	while (a)
	{
		if (a->next && a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}