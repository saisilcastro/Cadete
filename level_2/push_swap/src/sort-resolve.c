/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-resolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:48:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/25 10:26:35 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

char	a_sorted(t_sort *set)
{
	t_stack	*sorted;

	if (!set)
		return (0);
	sorted = set->a;
	while (sorted)
	{
		if (sorted->next && sorted->data > sorted->next->data)
			return (0);
		sorted = sorted->next;
	}
	return (1);
}

char	is_sorted(t_sort *set)
{
	t_stack	*sorted;

	if (!set || set->b_max)
		return (0);
	sorted = set->a;
	while (sorted)
	{
		if (sorted->next && sorted->data > sorted->next->data)
			return (0);
		sorted = sorted->next;
	}
	return (1);
}

int	sort_resolve(t_sort *set)
{	
	if (is_sorted(set))
		return (1);
	if (!set || set->b_max > 0)
		return (0);
	if (set->a_max <= 5)
		sort_little(set);
	else
	{
		sort_index(set);
		sort_radix(set);
	}
	return (1);
}
