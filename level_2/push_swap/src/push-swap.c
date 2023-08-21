/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:05:32 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/19 20:32:40 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sort_of.h>

void	push_swap(char **argv)
{
	t_sort	sort;

	sort_set(&sort);
	sort_populate(&sort, argv);
	if (!stack_dup(sort.a))
	{
		if (sort_resolve(&sort))
			ft_printf("sorted\n");
	}
	else
		ft_printf("Error\n");
	sort_pop(&sort);
}
