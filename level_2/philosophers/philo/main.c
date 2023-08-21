/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:23:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 17:53:52 by lde-cast         ###   ########.fr       */
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
	if (life_take_fork(set, set->thinker->prev, set->thinker, set->thinker->next))
	{
		//printf("taken a fork");
	}
	//life_update(set);
	life_pop(set);
}
