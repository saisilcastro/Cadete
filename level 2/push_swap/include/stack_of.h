/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_of.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:08:02 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 12:20:40 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_OF_H
# define STACK_OF_H

typedef struct s_stack	t_stack;
struct s_stack{
	int		data;
	t_stack	*next;
	t_stack	*prev;
};

extern t_stack	*stack_push(int data);
extern void		stack_next_last(t_stack	**head, t_stack *set);
extern int		stack_rotate_up(t_stack **head);
extern int		stack_rotate_down(t_stack **head);
extern int		stack_swap(t_stack *head);
extern int		stack_min(t_stack *head);
extern void		stack_print(t_stack *head);
extern void		stack_pop_first(t_stack **head);
extern void		stack_pop(t_stack **head);

#endif