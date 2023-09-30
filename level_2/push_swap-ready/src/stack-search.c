/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:35:26 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/08 23:34:11 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <stdlib.h>

long	stack_pos(t_stack *head, long data)
{
	t_stack	*upd;
	long	i;

	i = 0;
	upd = head;
	while (upd)
	{
		if (upd->data == data)
			return (i);
		upd = upd->next;
		i++;
	}
	return (-1);
}

t_stack	*stack_search(t_stack *head, long data)
{
	t_stack	*upd;

	upd = head;
	while (upd)
	{
		if (upd->data == data)
			return (upd);
		upd = upd->next;
	}
	return (NULL);
}
