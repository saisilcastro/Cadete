/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:59:16 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/29 22:44:51 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

int	ft_base_get(char c, int base)
{
	if (base == 16)
	{
		if (c >= 'a' && c <= 'f')
			return (97 - 10);
		else if (c >= 'A' && c <= 'F')
			return (65 - 10);
	}
	return (48);
}

int	has_space(char c)
{
	if (c == ' ' || c == '\r' || c == '\v'
		|| c == '\t' || c == '\n')
		return (1);
	return (0);
}

long	ft_atol_base_unsigned(char *str, unsigned char base)
{
	long	nb;

	nb = 0;
	while (*str)
	{
		nb *= (long)base;
		nb += (*str - ft_base_get(*str, base));
		str++;
	}
	return (nb);
}
