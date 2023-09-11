/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort-cheaper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:25:40 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/11 16:33:06 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sort_of.h>

int which_is_cheaper_b(t_sort *set, long data)
{
	if (data < stack_min(set->b) && data > stack_max(set->b))
		return (0);
}
