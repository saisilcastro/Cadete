/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 19:46:01 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/12 20:00:00 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack_of.h>
#include <ft_printf.h>

void	swap_int(long *a, long *b)
{
	long	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_swap(char stack)
{
	if (stack == 'a')
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}

int	stack_buble_sort(t_stack **head, char *message)
{
	t_stack	*outter;
	t_stack	*inner;
	char	swap;

	if (!head)
		return (0);
	outter = *head;
	while (outter)
	{
		swap = 0;
		inner = outter->next;
		while (inner)
		{
			if (inner->data > outter->data)
			{
				swap = 1;
				swap_int(&inner->data, &outter->data);
			}				
			inner = inner->next;
		}
		if (swap)
			ft_printf("%s\n", message);
		outter = outter->next;
	}
	return (0);
}

int	stack_sort_three(t_stack **head, char stack)
{
	char	*message;

	if (stack_size(*head) != 3)
		return (0);
	if (stack == 'a')
		message = "sa";
	else
		message = "sb";
	stack_buble_sort(head, message);
	return (1);
}