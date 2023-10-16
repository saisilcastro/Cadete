/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:00:41 by mister-code       #+#    #+#             */
/*   Updated: 2023/10/15 14:15:46 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <math_of.h>
#define WIDTH 640
#define HEIGHT 480

t_vi2d	line_maker(t_vi2d b, t_vi2d e)
{
	static double	step;
	static t_vi2d	way;

	step += 0.0001;
	way.x = (1 - step) * b.x + step * e.x;
	way.y = (1 - step) * b.y + step * e.y;
	if (step >= 1)
		step = 0;
	return (way);
}

void	place_draw_line(mlx_image_t *set, t_vi2d b, t_vi2d e, int color)
{
	t_vi2d	way;

	way = vi2d_start(b.x, b.y);
	while (way.x != e.x)
	{
		way = line_maker(b, e);
		mlx_put_pixel(set, way.x, way.y, color);
	}
}

static void user_init(t_place *set)
{
	set->gear->bg->img = mlx_new_image(set->gear->plugin, WIDTH, HEIGHT);
	if (!set->gear->bg->img)
	{
		fprintf(stderr, "background has not been created\n");
		exit(0);
	}
	mlx_image_to_window(set->gear->plugin, set->gear->bg->img, 0, 0);
	//mlx_image_t* img = mlx_new_image(mlx, WIDTH, HEIGHT);
	// if (!img || (mlx_image_to_window(mlx, img, 0, 0) < 0))
	// 	ft_error();
}

static void	user_update(t_place *set)
{
	mlx_image_t	*img;

	img = set->gear->bg->img;
	mlx_get_mouse_pos(set->gear->plugin, &set->gear->mouse->x, &set->gear->mouse->y);
	place_draw_line(img, vi2d_start(WIDTH / 2, HEIGHT / 2), vi2d_start(set->gear->mouse->x, set->gear->mouse->y), 0xFF0000FF);
	//printf("%i %i\n", set->gear->mouse->x, set->gear->mouse->y);
}

// Print the window width and height.
static void ft_hook(void* param)
{
	const t_machine *gear = param;

	//place_draw_line(img, vi2d_start(200, 200), vi2d_start(50, 50), 0xFF0000FF);	
}

int main(void)
{
	t_place	place;
	place_set(&place);
	if (!place.start(&place, vi2d_start(WIDTH, HEIGHT), "cub3D", true))
	{
		fprintf(stderr, "mlx has not been started\n");
		exit(0);
	}
	place.init = user_init;
	place.update = user_update;
	place.run(&place);
	return (0);
}
