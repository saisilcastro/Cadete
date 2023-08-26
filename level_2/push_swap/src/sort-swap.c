/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:53:59 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/26 12:32:51 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_sa(t_sort *set, int i)
{
	if (!set || !stack_swap(set->a))
		return ;
	if (i == 0)
		ft_printf("sa\n");
}

void	sort_sb(t_sort *set, int i)
{
	if (!set || !stack_swap(set->b))
		return ;
	if (i == 0)
		ft_printf("sb\n");
}

void	sort_ss(t_sort *set, int i)
{
	if (!set || !stack_swap(set->b) || !stack_swap(set->a))
		return ;
	if (i == 0)
		ft_printf("ss\n");
}
