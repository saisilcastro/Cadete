/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_io.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:49:08 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/02 16:30:17 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus/minitalk_bonus.h>

void	send_data(t_talk *set, char byte, size_t size)
{
	size_t	bit;
	int		status;

	if (!set)
		return ;
	bit = -1;
	while (++bit < size)
	{
		set->enable = 1;
		if ((128 >> bit) & byte)
			status = HIGH;
		else
			status = LOW;
		if (kill(set->id, status))
			ft_putstr_fd("server has been shutdown\n", 1);
		while (set->enable)
			usleep(100);
	}
}
