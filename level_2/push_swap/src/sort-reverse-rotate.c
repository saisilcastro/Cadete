/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-reverse-rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:55:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/13 00:45:19 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_rra(t_sort *set, int i)
{
	if (!set || !stack_rotate_down(&set->a))
		return ;
	if (i == 0)
		ft_printf("rra\n");
}

void	sort_rrb(t_sort *set, int i)
{
	if (!set || !stack_rotate_down(&set->b))
		return ;
	if (i == 0)
		ft_printf("rrb\n");
}

void	sort_rrr(t_sort *set, int i)
{
	if (!set || !stack_rotate_down(&set->b) || !stack_rotate_down(&set->a))
		return ;
	if (i == 0)
		ft_printf("rrr\n");
}
