/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:47:19 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/25 16:35:07 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <place.h>
# include <map_of.h>

extern void	image_create(t_place *set, t_map *map, t_vi2d *pos, t_vi2d id);
extern void	object_create(t_place *set, t_map *map);
extern void	cube_3D_execute(char *path);

#endif // CUB3D_H