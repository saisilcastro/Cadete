/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:46:41 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/29 21:53:27 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <chained.h>

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

void	chained_pop(t_chained *set)
{
	t_chained	*next;

	if (!set)
		return ;
	while (set)
	{
		next = set->next;
		free(set);
		set = next;
	}
}
