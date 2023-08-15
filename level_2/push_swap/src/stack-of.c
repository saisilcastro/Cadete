/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:18:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/12 21:33:09 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <ft_printf.h>
#include <stdlib.h>

t_stack	*stack_push(long data)
{
	t_stack	*set;

	set = (t_stack *)malloc(sizeof(t_stack));
	set->data = data;
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

void	stack_push_message(t_stack **head, t_stack *set, int *max, char *message)
{
	if (stack_next_last(head, set))
	{
		*max += 1;
		ft_printf("%s", message);
	}
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
