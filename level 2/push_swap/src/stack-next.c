/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-next.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:02:06 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/11 20:02:16 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>

void	stack_next_first(t_stack **head, t_stack *set)
{
	if (!set)
		return ;
	set->next = *head;
	if (*head)
		(*head)->prev = set;
	*head = set;
}

void	stack_next_last(t_stack	**head, t_stack *set)
{
	t_stack	*last;

	if (!*head)
	{
		*head = set;
		return ;
	}
	last = *head;
	while (last->next)
		last = last->next;
	set->prev = last;
	last->next = set;
}
