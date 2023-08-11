/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:25:11 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 14:05:43 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>

int	stack_min(t_stack *head)
{
	int		min;
	t_stack	*upd;

	min = 0;
	upd = head;
	while (upd)
	{
		if (upd->data < min)
			min = upd->data;
		upd = upd->next;
	}
	return (min);
}
