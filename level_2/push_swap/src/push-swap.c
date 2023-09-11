/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:05:32 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/09 01:46:51 by lde-cast         ###   ########.fr       */
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
		sort_resolve(&sort);
	else
		ft_printf("**Error\n");
	sort_pop(&sort);
}
