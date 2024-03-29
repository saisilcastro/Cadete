/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:32:33 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/21 16:56:52 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLACE_H
# define PLACE_H

# include <keyboard_of.h>
# include <machine.h>
# include <mlx_plugin.h>
# include <system_of.h>
# include <unistd.h>

typedef struct s_collect{
	int	current;
	int	max;
}t_collect;

typedef struct s_place	t_place;
struct s_place
{
	t_machine	gear[1];
	t_collect	collect[1];
	int			hero_id;
	int			step;
	t_status	(*start)(t_place *);
	t_image		*(*image_select)(t_place *set, int id);
	int			(*image_load_first)(t_place *set, char *path, int id);
	int			(*image_load_last)(t_place *set, char *path, int id);
	t_object	*(*object_select)(t_place *set, int id);
	void		(*object_next_first)(t_place *set, t_object *obj);
	void		(*object_next_last)(t_place *set, t_object *obj);
	void		(*map_create)(t_place *set, int id, t_vi2d size);
	void		(*map_set)(t_place *set, int id);
	void		(*init)(t_place *set, void *data);
	int			(*key_down)(t_place *set, t_keyboard_map key);
	int			(*update)(t_place *set);
	void		(*run)(t_place *set, void *data);
	void		(*draw_sub_bg)(t_place *set, int id, t_vi2d begin);
	void		(*draw_bg)(t_place *set);
	void		(*draw)(t_place *set);
	void		(*stop)(t_place *set);
	t_status	(*destroy)(t_place * set);
	void		(*pop)(t_place *set);
};

extern void		place_set(t_place *set, t_SystemSet up, t_vi2d size);
extern t_image	*place_image_select(t_place *set, int id);
extern int		place_image_load_first(t_place *set, char *path, int id);
extern int		place_image_load_last(t_place *set, char *path, int id);
extern t_object	*place_object_select(t_place *set, int id);
extern void		place_object_next_first(t_place *set, t_object *obj);
extern void		place_object_next_last(t_place *set, t_object *obj);
extern t_object	*place_object_collision(t_place *set, t_object *selected);
extern void		place_object_pop(t_chained **set, t_object *rem);
extern void		place_map_create(t_place *set, int id, t_vi2d size);
extern void		place_map_set(t_place *set, int id);
extern void		place_run(t_place *set, void *data);
extern void		place_camera_object(t_place *set, t_object *obj);
extern t_status	place_block_move(t_place *set, t_object *hero);
extern int		place_key_down(t_place *set, t_keyboard_map map);
extern void		place_draw_sub_bg(t_place *set, int id, t_vi2d begin);
extern void		place_draw_bg(t_place *set);
extern void		place_draw(t_place *set);
extern void		place_stop(t_place *set);
extern t_status	place_destroy(t_place *set);
extern void		place_pop(t_place *set);

#endif //PLACE_H