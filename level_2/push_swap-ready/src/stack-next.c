/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-next.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:02:06 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/12 21:20:26 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>

int	stack_next_first(t_stack **head, t_stack *set)
{
	if (!set)
		return (0);
	set->next = *head;
	if (*head)
		(*head)->prev = set;
	*head = set;
	return (1);
}

int	stack_next_last(t_stack	**head, t_stack *set)
{
	t_stack	*last;

	if (!set)
		return (0);
	if (!*head)
	{
		*head = set;
		return (1);
	}
	last = *head;
	while (last->next)
		last = last->next;
	set->prev = last;
	last->next = set;
	return (1);
}
