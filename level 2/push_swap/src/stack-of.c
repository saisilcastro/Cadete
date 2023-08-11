/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:18:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 06:29:15 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <ft_printf.h>
#include <stdlib.h>

t_stack	*stack_push(int data)
{
	t_stack	*set;

	set = (t_stack *)malloc(sizeof(t_stack));
	set->data = data;
	set->next = NULL;
	set->prev = NULL;
	return (set);
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

void	stack_print(t_stack *head)
{
	t_stack	*upd;

	upd = head;
	while (upd)
	{
		ft_printf("%i ", upd->data);
		upd = upd->next;
	}
	ft_printf("\n");
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
