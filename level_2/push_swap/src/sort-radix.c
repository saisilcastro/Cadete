/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:34:53 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/21 17:39:15 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

static int	bit_get_max(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bit;

	head = *stack;
	max = head->index;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	max_bit = 0;
	while ((max >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	sort_radix(t_sort *set)
{
	int		bit;
	int		size;
	int		i;
	int		j;
	t_stack	*a;

	i = 0;
	a = set->a;
	size = stack_size(set->a);
	bit = bit_get_max(&set->a);
	while (i < bit)
	{
		j = 0;
		while (j++ < size)
		{
			a = set->a;
			if (((a->data >> i) & 1) == 1)
				sort_ra(set, 0);
			else
				sort_push(set, 'b');
		}
		while (set->b_max)
			sort_push(set, 'a');
		i++;
	}
}
