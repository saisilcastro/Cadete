/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:19:00 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/25 16:10:08 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <ft_printf.h>

void	stack_push_message(t_stack **head, t_stack *set,
		long *max, char *message)
{
	if (!set || !message)
		return ;
	if (stack_next_first(head, set))
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
