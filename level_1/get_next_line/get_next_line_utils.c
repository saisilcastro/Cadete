/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:08:36 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 22:39:25 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_byte	*byte_push(char set)
{
	t_byte	*byte;

	byte = (t_byte *)malloc(sizeof(t_byte));
	byte->symbol = set;
	byte->next = NULL;
	return (byte);
}

void	byte_next_last(t_byte **head, t_byte *new)
{
	t_byte	*update;

	if (!new)
		return ;
	if (!*head)
	{
		*head = new;
		return ;
	}
	update = *head;
	while (update->next)
		update = update->next;
	update->next = new;
}
