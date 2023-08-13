/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_of.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:08:02 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/12 21:21:09 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_OF_H
# define STACK_OF_H

typedef struct s_stack	t_stack;
struct s_stack{
	long	data;
	t_stack	*next;
	t_stack	*prev;
};

extern t_stack	*stack_push(long data);
extern void		stack_push_message(t_stack **head, t_stack *set, int *max, char *message);
extern int		stack_next_first(t_stack	**head, t_stack *set);
extern int		stack_next_last(t_stack	**head, t_stack *set);
extern int		stack_rotate_up(t_stack **head);
extern int		stack_rotate_down(t_stack **head);
extern int		stack_swap(t_stack *head);
extern int		stack_size(t_stack *head);
extern int		stack_dup(t_stack *head);
extern int		stack_min(t_stack *head);
extern int		stack_max(t_stack *head);
extern int		stack_pos(t_stack *head, long data);
extern int		stack_total(t_stack *head);
extern int		stack_sort_three(t_stack **head, char stack);
extern void		stack_print(t_stack *head);
extern void		stack_pop_first(t_stack **head);
extern void		stack_pop(t_stack **head);

#endif