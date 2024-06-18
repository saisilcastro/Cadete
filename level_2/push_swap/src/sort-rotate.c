/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:48:36 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/13 00:44:23 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_ra(t_sort *set, int i)
{
	if (!set || !stack_rotate_up(&set->a))
		return ;
	if (i == 0)
		ft_printf("ra\n");
}

void	sort_rb(t_sort *set, int i)
{
	if (!set || !stack_rotate_up(&set->b))
		return ;
	if (i == 0)
		ft_printf("rb\n");
}

void	sort_rr(t_sort *set, int i)
{
	if (!set || !stack_rotate_up(&set->b) || !stack_rotate_up(&set->a))
		return ;
	if (i == 0)
		ft_printf("rr\n");
}
