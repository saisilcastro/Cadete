/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:53:59 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 07:21:16 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_sa(t_sort *set)
{
	if (!set || !stack_swap(set->a))
		return ;
	ft_printf("sa\n");
}

void	sort_sb(t_sort *set)
{
	if (!set || !stack_swap(set->b))
		return ;
	ft_printf("sb\n");
}

void	sort_ss(t_sort *set)
{
	if (!set || !stack_swap(set->b) || !stack_swap(set->a))
		return ;
	ft_printf("ss\n");
}