/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:23:50 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/29 22:42:57 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>

int	main(int argc, char **argv)
{
	t_life	tales;

	if (argc > 3)
	{
		life_set(&tales);
		life_command(&tales, argv);
		life_update(&tales);
		life_pop(&tales);
	}
	return (0);
}
