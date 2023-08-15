/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:35:26 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/12 23:22:20 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>

int	stack_pos(t_stack *head, long data)
{
	t_stack	*upd;
	int		i;

	i = 0;
	upd = head;
	while (upd)
	{
		if (upd->data == data)
			break ;
		upd = upd->next;
		i++;
	}
	if (i > 0)
		i++;
	return (i);
}
