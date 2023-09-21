/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:46:01 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/20 20:04:39 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <ft_printf.h>

static void	swap_long(long *a, long *b)
{
	long	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	make_swap(t_stack **head, char stack)
{
	swap_long(&(*head)->data, &(*head)->next->data);
	if (stack == 'a')
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}

static void	make_r(t_stack	**head, char stack)
{
	stack_rotate_up(head);
	if (stack == 'a')
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
}

static void	make_rr(t_stack **head, char stack)
{
	stack_rotate_down(head);
	if (stack == 'a')
		ft_printf("rra\n");
	else
		ft_printf("rrb\n");
}

int	stack_sort_three(t_stack **head, char stack)
{
	if (stack_size(*head) != 3)
		return (0);
	if (stack_pos(*head, stack_max(*head)) < 1)
	{
		if (stack_pos(*head, stack_min(*head)) == 1)
			make_r(head, stack);
		else
		{
			make_swap(head, stack);
			make_rr(head, stack);
		}
	}
	else
	{
		if (stack_pos(*head, stack_min(*head)) == 1)
			make_swap(head, stack);
		else if (stack_pos(*head, stack_min(*head)) == 2)
			make_rr(head, stack);
		else
		{
			make_swap(head, stack);
			make_r(head, stack);
		}
	}
	return (1);
}
