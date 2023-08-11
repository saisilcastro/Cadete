/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:56:13 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 07:06:30 by mister-code      ###   ########.fr       */
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
  int temp;

  if (!head || !head->next)
    return (0);
  temp = head->data;
  head->data = head->next->data;
  head->next->data = temp;
  return (1);
}

