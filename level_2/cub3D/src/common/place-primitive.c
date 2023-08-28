/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-primitive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/28 17:47:42 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <math.h>

void	place_draw_line(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d	delta;
	t_vi2d	i;
	t_image	*bg;
	int		p;
	char	*dest;

	if (!set || !set->gear->bg->image)
		return ;
	if (!place_map_limit(set, b, e))
		return ;
	bg = set->gear->bg->image;
	delta.x = e.x - b.x;
	delta.y = e.y - b.y;
	i.x = b.x - 1;
	p = 2 * delta.y - delta.x;
	while (++i.x < e.x)
	{
		if (p >= 0)
		{
			dest = bg->addr + (i.y * bg->length + i.x * (bg->bpp / 8));
			*(unsigned int *)dest = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
			i.y++;
			p = p + 2 * delta.y - 2 * delta.x;
		}
		else
		{
			dest = bg->addr + (i.y * bg->length + i.x * (bg->bpp / 8));
			*(unsigned int *)dest = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
			p = p + 2 * delta.y;
		}
	}
}
