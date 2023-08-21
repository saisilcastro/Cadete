/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_of.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:36:15 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/21 17:20:02 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAINED_OF_H
# define CHAINED_OF_H

typedef struct s_chained	t_chained;
struct s_chained{
	void		*data;
	t_chained	*prev;
	t_chained	*next;
};

extern t_chained	*chained_push(void *data);
extern int			chained_next_first(t_chained **head, t_chained *set);
extern int			chained_next_last(t_chained **head, t_chained *set);
extern t_chained	*chained_last(t_chained *head);
extern void			chained_pop(t_chained **head, void (*pop)(void **data));

#endif