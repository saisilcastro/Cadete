/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_of.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:20:02 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/28 17:44:05 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIXEL_OF_H
# define PIXEL_OF_H

# include <system_of.h>
# include <math_of.h>

typedef struct s_pixel{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	unsigned char	a;
}t_pixel;

extern void		pixel_rgb_set(t_pixel *set, unsigned char r,
					unsigned char g, unsigned char b);
extern t_pixel	pixel_rgb_local(unsigned char r, unsigned char g, unsigned char b);
extern t_pixel	pixel_rgba_local(unsigned char r, unsigned char g,
					unsigned char b, unsigned char a);
extern void		pixel_from_abgr(t_pixel *set, int color);
extern void		pixel_to_int(void *set, t_pixel *px, t_vi2d pt);

#endif // PIXEL_OF_H