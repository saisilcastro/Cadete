/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 08:06:38 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/29 08:46:55 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mandatory/minitalk.h>

int	has_space(char c)
{
	if ((c > 7 && c < 16) || c == 32)
		return (1);
	return (0);
}

int	has_number(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	has_hexa(char c)
{
	if ((c > 64 && c < 71) || (c > 96 && c < 103))
		return (1);
	return (0);
}

int	base_get(char byte)
{
	if (byte > 64 && byte < 91)
		return (65);
	if (byte > 96 && byte < 123)
		return (97);
	return (48);
}

int	ft_atoi_base(char *str, int base)
{
	int	number;
	int	signal;

	while (has_space(*str))
		str++;
	signal = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	number = 0;
	while (*str && (has_number(*str) || has_hexa(*str)))
	{
		number *= base;
		number += (*str - base_get(*str));
		str++;
	}
	return (number * signal);
}