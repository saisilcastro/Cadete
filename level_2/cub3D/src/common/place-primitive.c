/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-primitive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:13:23 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/27 22:08:41 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <math.h>

void		place_draw_line(t_place *set, t_vi2d b, t_vi2d e, t_pixel c)
{
	t_vi2d	p;
	t_image	*bg;
	char	*dest;
	
	if (!set || !set->gear->bg->image)
		return ;
	if (!place_map_limit(set, b, e))
		return ;
	bg = set->gear->bg->image;
	p.x = b.x - 1;
	p.y = b.y;
	while (++p.x < e.x)
	{
		p.y = atan((e.y - b.y) / (e.x - b.x)) * p.x + b.y;
		dest = bg->addr + (p.y * bg->length + p.x * (bg->bpp / 8));
		*(unsigned int *)dest = (c.a << 24 | c.r << 16 | c.g << 8 | c.b << 0);
	}
}