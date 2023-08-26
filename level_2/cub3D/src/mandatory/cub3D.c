/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:49:09 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/25 16:36:16 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <map_of.h>

extern void	user_init(t_place *place, void *data);
extern int	user_update(t_place *place);

void	cube_3D_execute(char *path)
{
	static t_place		place;
	t_SystemSet			up;

	up.system = SYSTEM_MINILIBX;
	up.driver = GRAPHIC_PRIMARY;
	up.audio = SYSTEM_AUDIO_NONE;
	up.lan = SYSTEM_NETWORK_NONE;
	(void)path;
	place_set(&place, up, vi2d_start(640, 480));
	if (!place.start(&place))
	{
		write(1, "Error\ncould not start the fucking machine\n", 42);
		place_pop(&place);
		return ;
	}
	place.init = user_init;
	place.update = user_update;
	place.pop = NULL;
	place.run(&place, path);
}
