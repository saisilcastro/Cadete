/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:56:13 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/25 16:13:11 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <stdlib.h>
#include <ft_printf.h>

int	stack_rotate_up(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*cur;

	if (!*head || !(*head)->next)
		return (0);
	cur = *head;
	first = cur->next;
	last = cur;
	first->prev = NULL;
	last->next = NULL;
	last = first;
	while (last->next)
		last = last->next;
	cur->prev = last;
	last->next = cur;
	*head = first;
	return (1);
}

int	stack_rotate_down(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*cur;

	if (!*head || !(*head)->next)
		return (0);
	cur = *head;
	first = cur;
	while (first->next)
		first = first->next;
	last = first->prev;
	last->next = NULL;
	first->prev = NULL;
	cur->prev = first;
	first->next = cur;
	*head = first;
	return (1);
}

int	stack_swap(t_stack *head)
{
	int	temp;

	if (!head || !head->next)
		return (0);
	temp = head->data;
	head->data = head->next->data;
	head->next->data = temp;
	return (1);
}
