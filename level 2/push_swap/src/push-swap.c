/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:05:32 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 19:38:34 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sort_of.h>

void	push_swap(char **argv)
{
	t_sort	sort;

	sort_set(&sort);
	sort_populate(&sort, argv);
	sort_sa(&sort);
	sort_pb(&sort);
	sort_pb(&sort);
	sort_pb(&sort);
	stack_print(sort.b);
	sort_sa(&sort);
	sort_pa(&sort);
	sort_pa(&sort);
	sort_pa(&sort);
	stack_print(sort.a);
	ft_printf("\n");
	sort_pop(&sort);
}
