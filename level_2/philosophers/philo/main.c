/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:23:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/26 11:52:42 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <timer_of.h>
#include <stdio.h>

void	philosophe_loop(t_life *set, char **argv);

int	main(int argc, char **argv)
{
	t_life	tales;

	if (argc > 4 && argv)
		philosophe_loop(&tales, argv);
	return (0);
}

long	divided_thousand(long i)
{
	return ((i >> 10) + 1);
}

void	philosophe_loop(t_life *set, char **argv)
{
	life_set(set);
	life_command(set, argv);
	life_update(set);
	life_pop(set);
}
