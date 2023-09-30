/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:43:10 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/29 21:52:18 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAINED_H
# define CHAINED_H

typedef struct s_chained	t_chained;
struct s_chained{
	void		*data;
	t_chained	*prev;
	t_chained	*next;	
};

extern t_chained	*chained_push(void *data);
extern void			chained_pop(t_chained *set);

#endif