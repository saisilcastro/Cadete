/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained-of.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:35:36 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 17:19:36 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <chained_of.h>
#include <stdlib.h>
#include <stdio.h>

t_chained	*chained_push(void *data)
{
	t_chained	*set;

	set = (t_chained *)malloc(sizeof(t_chained));
	if (!set)
		return (NULL);
	set->data = data;
	set->prev = NULL;
	set->next = NULL;
	return (set);
}

int	chained_next_first(t_chained **head, t_chained *set)
{
	if (!set)
		return (0);
	set->next = *head;
	if (*head)
		(*head)->prev = set;
	*head = set;
	return (1);
}

int	chained_next_last(t_chained **head, t_chained *set)
{
	t_chained	*update;

	if (!set)
		return (0);
	if (!*head)
	{
		*head = set;
		return (1);
	}
	update = *head;
	while (update->next)
		update = update->next;
	set->prev = update;
	update->next = set;
	return (1);
}

t_chained	*chained_last(t_chained *head)
{
	t_chained	*last;

	last = head;
	while (last->next)
		last = last->next;
	return (last);
}

void	chained_pop(t_chained **head, void (*pop)(void **data))
{
	t_chained	*next;
	t_chained	*current;

	current = *head;
	while (current)
	{
		next = current->next;
		if (pop)
			pop((void **)&current->data);
		free(current);
		current = next;
	}
}
