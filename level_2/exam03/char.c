/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:21:59 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 13:31:03 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_char	*char_push(char data)
{
	t_char	*set;

	set = (t_char *)malloc(sizeof(t_char));
	set->data = data;
	set->next = NULL;
	return (set);
}

void	char_next_last(t_char **list, t_char *set)
{
	t_char	*upd;

	if (!*list)
	{
		*list = set;
		return ;
	}
	upd = *list;
	while (upd->next)
		upd = upd->next;
	upd->next = set;
}

void	char_pop(t_char *list)
{
	t_char	*next;

	while (list)
	{
		next = list->next;
		free(list);
		list = next;
	}
}
