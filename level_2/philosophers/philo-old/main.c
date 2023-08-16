/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:23:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/31 00:14:01 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <timer_of.h>
#include <stdio.h>

void	philosophe_loop(t_life *set, char **argv);

int	main(int argc, char **argv)
{
	t_life	tales;

	if (argc > 3 && argv)
		philosophe_loop(&tales, argv);
	return (0);
}

void	philosophe_loop(t_life *set, char **argv)
{
	life_set(set);
	life_command(set, argv);
	life_update(set);
	life_pop(set);
}
