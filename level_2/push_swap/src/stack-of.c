/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:18:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/25 11:30:23 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <stdlib.h>

t_stack	*stack_push(long data)
{
	t_stack	*set;

	set = (t_stack *)malloc(sizeof(t_stack));
	set->data = data;
	set->index = -1;
	set->next = NULL;
	set->prev = NULL;
	return (set);
}

int	stack_size(t_stack *head)
{
	t_stack	*upd;
	int		max;

	max = 0;
	upd = head;
	while (upd)
	{
		max++;
		upd = upd->next;
	}
	return (max);
}

void	stack_pop_first(t_stack **head)
{
	t_stack	*next;

	if (!*head)
		return ;
	next = (*head)->next;
	free(*head);
	*head = next;
}

void	stack_pop(t_stack **head)
{
	t_stack	*next;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
