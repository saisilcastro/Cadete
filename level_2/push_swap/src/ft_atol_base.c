/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 02:25:24 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/05 16:39:48 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_atol_base.h>
#include <ft_printf.h>
#include <stdio.h>

static long	base_get(int base)
{
	if (base == 10)
		return (48);
	return (0);
}

static int	valid_char(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F'))
		return (1);
	return (0);
}

int	is_number(char *str)
{
	while ((*str && *str >= '0' && *str <= '9') || *str == '-')
	{
		if (*str == '-' && *(str + 1) == '-')
			return (0);
		str++;
	}
	if (*str)
		return (0);
	return (1);
}

static int	has_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == 'v' || c == '\f' || c == '\0')
		return (1);
	return (0);
}

long	ft_atol_base(char *str, int base)
{
	long	number;
	int		mul;

	mul = 1;
	if (!str)
		return (0);
	while (has_space(*str))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			mul = -1;
		str++;
	}
	number = 0;
	while (*str && valid_char(*str))
	{
		number *= base;
		number += (*str - base_get(base));
		str++;
	}
	return (number * mul);
}
