/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:05:32 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/11 22:29:04 by lde-cast         ###   ########.fr       */
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
		sort_pb(&sort);
		sort_pb(&sort);
		sort_pb(&sort);
		stack_sort_three(&sort.b, 'b');
		//sort_b_apply(&sort);
		//sort_b_apply(&sort);
		stack_print(sort.b);
		stack_print(sort.a);
		//ft_printf("\n");	
	}
	else
		ft_printf("Error\n");
	sort_pop(&sort);
}
