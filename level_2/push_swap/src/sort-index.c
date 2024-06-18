/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:51:40 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/25 10:08:24 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <stdlib.h>

static t_stack	*stack_min_next(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min;
	int		is_min;

	min = NULL;
	is_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!is_min || head->data < min->data))
			{
				min = head;
				is_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	sort_index(t_sort *set)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = stack_min_next(&set->a);
	while (head)
	{
		head->index = index++;
		head = stack_min_next(&set->a);
	}
}
