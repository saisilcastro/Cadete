/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_of.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:47:35 by lde-cast          #+#    #+#             */
/*   Updated: 2023/07/20 09:14:41 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_OF_H
# define MAP_OF_H

# include <system_of.h>
# include <math_of.h>
# include <stdlib.h>

typedef struct s_map	t_map;
struct s_map{
	char	**data;
	char	**validator;
	t_vi2d	begin[1];
	t_vi2d	pos[1];
	t_vi2d	size[1];
	int		collectable;
};

typedef enum e_map_error{
	MAP_NOT_CREATED = -14,
	MAP_INVALID_TOP_BOTTOM,
	MAP_INVALID_MID_BORDER,
	MAP_INVALID_FILE,
	MAP_EMPTY,
	MAP_NO_START_POINT,
	MAP_NO_EXIT,
	MAP_NO_COLLECTABLE,
	MAP_MULTIPLE_START_POINT,
	MAP_MULTIPLE_EXIT,
	MAP_INVALID_CHAR,
	MAP_COLLECTABLE_INACCESSIBLE,
	MAP_EXIT_INACCESSIBLE,
	MAP_ENEMY_TRAP,
	MAP_OBJECT_INVALID,
	MAP_NO_ERROR
}t_map_error;

extern t_status		map_valid_file(char *path);
extern void			map_set(t_map *map);
extern t_map_error	map_load(t_map *map, char *path);
extern t_status		map_size(t_map *map, char *buffer, int fd);
extern char			*map_message_error(t_map_error error);
extern t_map_error	map_border_validator(t_map *map);
extern t_map_error	map_count_char_error(t_map *map);
extern t_map_error	map_flood_fill(t_map *map);
extern t_map_error	map_validate(t_map *map);
extern void			map_pop(t_map *map);

#endif //MAP_OF_H