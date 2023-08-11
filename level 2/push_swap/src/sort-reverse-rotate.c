/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-reverse-rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:55:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 07:19:37 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_rra(t_sort *set)
{
	if (!set || !stack_rotate_down(&set->a))
		return ;
	ft_printf("rra\n");
}

void	sort_rrb(t_sort *set)
{
	if (!set || !stack_rotate_down(&set->b))
		return ;
	ft_printf("rrb\n");
}

void	sort_rrr(t_sort *set)
{
	if (!set || !stack_rotate_down(&set->b) || !stack_rotate_down(&set->a))
		return ;
	ft_printf("rrr\n");
}
