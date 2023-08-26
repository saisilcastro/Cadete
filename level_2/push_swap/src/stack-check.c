/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:25:11 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/26 12:36:53 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>

int	stack_min(t_stack *head)
{
	int		min;
	t_stack	*upd;

	if (!head)
		return (0);
	min = head->data;
	upd = head;
	while (upd)
	{
		if (upd->data < min)
			min = upd->data;
		upd = upd->next;
	}
	return (min);
}

int	stack_max(t_stack *head)
{
	int		max;
	t_stack	*upd;

	max = 0;
	upd = head;
	while (upd)
	{
		if (upd->data > max)
			max = upd->data;
		upd = upd->next;
	}
	return (max);
}

int	stack_total(t_stack *head)
{
	int		total;
	t_stack	*upd;

	total = 0;
	upd = head;
	while (upd)
	{
		total += upd->data;
		upd = upd->next;
	}
	return (total);
}

int	stack_dup(t_stack *head)
{
	t_stack	*outter;
	t_stack	*inner;

	outter = head;
	while (outter)
	{
		inner = outter->next;
		while (inner)
		{
			if (inner->data == outter->data)
				return (1);
			inner = inner->next;
		}
		outter = outter->next;
	}
	return (0);
}
