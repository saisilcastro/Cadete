/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_of.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:12:06 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/09 07:49:54 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_OF_H
# define SORT_OF_H

# include <stack_of.h>

typedef struct s_sort	t_sort;
struct s_sort{
	t_stack	*a;
	t_stack	*b;
	int		a_max;
	int		b_max;
};

extern void	sort_set(t_sort	*set);
extern void	sort_populate(t_sort *set, char **argv);
extern void	sort_pa(t_sort *set);
extern void	sort_pb(t_sort *set);
extern void	sort_sa(t_sort *set);
extern void	sort_sb(t_sort *set);
extern void	sort_ss(t_sort *set);
extern void	sort_ra(t_sort *set);
extern void	sort_rb(t_sort *set);
extern void	sort_rr(t_sort *set);
extern void	sort_rra(t_sort *set);
extern void	sort_rrb(t_sort *set);
extern void	sort_rrr(t_sort *set);
extern void	sort_pop(t_sort *set);

#endif