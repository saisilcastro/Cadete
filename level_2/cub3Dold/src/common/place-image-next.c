/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place-image-next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:11:54 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/27 09:19:20 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <place.h>
#include <stdio.h>

int	place_image_next_first(t_place *set, t_image *image)
{
	if (!set || !image || place_image_select(set, image->id))
		return (Off);
	if (set->gear->up->system == SYSTEM_MINILIBX)
	{
		chained_next_first(&set->gear->image, chained_push(image));
		return (On);
	}
	return (Off);
}

int	place_image_next_last(t_place *set, t_image *image)
{
	if (!set || !image || place_image_select(set, image->id))
		return (Off);
	if (set->gear->up->system == SYSTEM_MINILIBX)
	{
		chained_next_last(&set->gear->image, chained_push(image));
		return (On);
	}
	return (Off);
}
