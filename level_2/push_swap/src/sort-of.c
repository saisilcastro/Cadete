/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-of.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:27:02 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/21 16:25:14 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>
#include <ft_atoi_base.h>
#include <stdlib.h>

void	sort_set(t_sort	*set)
{
	if (!set)
		return ;
	set->a = NULL;
	set->b = NULL;
	set->a_max = 0;
	set->b_max = 0;
}

int	is_number(char *str)
{
	while ((*str && *str >= '0' && *str <= '9') || *str == '-')
		str++;
	if (*str)
		return (0);
	return (1);
}

void	sort_populate(t_sort *set, char **argv)
{
	if (!set || !argv)
		return ;
	argv++;
	while (*argv)
	{
		if (!is_number(*argv))
		{
			ft_printf("Error\n");
			if (set->a_max)
				stack_pop(&set->a);
			break ;
		}
		stack_next_last(&set->a, stack_push(ft_atoi_base(*argv, 10)));
		set->a_max++;
		argv++;
	}
}

void	sort_pop(t_sort *set)
{
	if (!set)
		return ;
	stack_pop(&set->a);
	stack_pop(&set->b);
}
