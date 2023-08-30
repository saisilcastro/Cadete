/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:17:10 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/29 12:22:46 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putstr_fd(char *str, int fd)
{
	while (*str)
		ft_putchar_fd(*str++, fd);
}

static int	base_number_get(int n, char upper)
{
	if (n > 9 && upper)
		return (65 - 10);
	else if (n > 9 && !upper)
		return (97 - 10);
	return (48);
}

void	ft_putnbr_base_fd(int	n, char base, char upper, int fd)
{
	if (n > -base && n < 0)
		write(fd, "-", 1);
	while (n <= -base || n >= base)
	{
		ft_putnbr_base_fd(n / base, base, upper, fd);
		n %= base;
	}
	if (n < 0)
		n *= -1;
	ft_putchar_fd(n + base_number_get(n, upper), fd);
}

int	ft_strcmp(char *s1, char * s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}