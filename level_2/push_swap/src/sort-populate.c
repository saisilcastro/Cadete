/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-populate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:27:47 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/25 17:42:14 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>
#include <ft_printf.h>
#include <ft_atol_base.h>
#define INT_MIN -2147483648

void	sort_populate(t_sort *set, char **argv)
{
	long	j;

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
		j = ft_atol_base(*argv, 10);
		if (j < INT_MIN || j > __INT_MAX__)
			break ;
		stack_next_last(&set->a, stack_push(j));
		set->a_max++;
		argv++;
	}
}

int	has_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	is_valid(t_sort *set, char *buffer)
{
	if (!buffer || !is_number(buffer))
	{
		ft_printf("Error\n");
		if (set->a_max)
			stack_pop(&set->a);
		return (0);
	}
	return (1);
}

void	sort_populate_int(t_sort *set, char **argv)
{
	char	*number;
	char	buffer[12];
	int		i;
	long	j;

	i = 0;
	number = argv[1];
	while (*number)
	{
		while (*number && has_space(*number))
			number++;
		while (*number && !has_space(*number))
			*(buffer + i++) = *number++;
		*(buffer + i) = '\0';
		if (!*(buffer + 0) || !is_valid(set, buffer))
			break ;
		j = ft_atol_base(buffer, 10);
		if (j < INT_MIN || j > __INT_MAX__)
			return ;
		stack_next_last(&set->a, stack_push(j));
		set->a_max++;
		i = 0;
	}
}
