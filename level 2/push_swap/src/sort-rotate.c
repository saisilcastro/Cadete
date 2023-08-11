/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 06:48:36 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 07:19:11 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>

void	sort_ra(t_sort *set)
{
	if (!set || !stack_rotate_up(&set->a))
		return ;
	ft_printf("ra\n");
}

void	sort_rb(t_sort *set)
{
	if (!set || !stack_rotate_up(&set->b))
		return ;
	ft_printf("rb\n");
}

void	sort_rr(t_sort *set)
{
	if (!set || !stack_rotate_up(&set->b) || !stack_rotate_up(&set->a))
		return ;
	ft_printf("rr\n");
}
