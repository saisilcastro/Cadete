/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:25:11 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/21 13:11:18 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>

long	stack_shorter(t_stack *head)
{
	long	min;
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

long	stack_bigger(t_stack *head)
{
	long	max;
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

long	stack_total(t_stack *head)
{
	long	total;
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
