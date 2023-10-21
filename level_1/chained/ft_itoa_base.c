/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:52:57 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/07 22:09:52 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_itoa_base.h>
#include <unistd.h>

void	ft_itoa_base(int n, int base)
{
	int				sign;
	unsigned long	number;

	sign = 1;
	if (n > -base || n < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	while (n < -base || n > base)
	{
		ft_itoa_base(n / base, base);
		n %= base;
	}
}
