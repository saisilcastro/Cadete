/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-cheaper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:25:40 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/20 20:23:44 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

void	above(t_sort *set, long i, int data)
{
	if (data < set->cost.a)
	{
		set->cost.a = data;
		set->cost.index_a = i;
		ft_printf("*%i %i\n", set->cost.a, set->cost.index_a);
	}
}

void	below(t_sort *set, long i, int data)
{
	t_stack	*b;
	long	pos;
	long	med;

	pos = 0;
	set->cost.b = set->b->data;
	med = set->b_max / 2;
	if (data < set->cost.a)
	{
		set->cost.a = data;
		set->cost.index_a = i;
		b = set->b;
		while (b)
		{
			if (data >= stack_min(set->b) && data <= stack_max(set->b))
			{
				pos = stack_pos(set->b, b->data);
				if (pos < med)
				{
					if (b->data < set->cost.b)
					{
						set->cost.b = b->data;
						set->cost.index_b = pos;
					}	
				}
			}
			b = b->next;
		}
	}
	
}

int	sort_cheaper(t_sort *set)
{
	t_stack	*x;
	long	i;
	int		med;

	x = set->a;
	set->cost.a = x->data;
	med = set->a_max / 2;
	while (x)
	{
		i = stack_pos(set->a, x->data);
		if (i > med)
			above(set, i, x->data);
		else
			below(set, i, x->data);
		x = x->next;
	}
	return (0);
}
