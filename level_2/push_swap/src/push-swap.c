/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:05:32 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/25 16:26:50 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <unistd.h>
#include <sort_of.h>

void	push_swap(char **argv, int argc)
{
	t_sort	sort;

	sort_set(&sort);
	if (argc == 2)
		sort_populate_int(&sort, argv);
	else if (argc > 2)
		sort_populate(&sort, argv);
	if (!stack_dup(sort.a))
		sort_resolve(&sort);
	else
		write(2, "Error\n", 6);
	sort_pop(&sort);
}
