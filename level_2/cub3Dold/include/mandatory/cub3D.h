/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 15:47:19 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/28 11:29:09 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <place.h>
# include <map_of.h>

extern void	image_create(t_place *set, t_map *map, t_vi2d *pos, t_vi2d id);
extern void	object_create(t_place *set, t_map *map);
extern void	cube_3d_execute(char *path);

#endif // CUB3D_H