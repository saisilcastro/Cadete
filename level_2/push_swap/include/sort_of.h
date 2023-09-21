/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_of.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:12:06 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/20 20:04:31 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_OF_H
# define SORT_OF_H

# include <stack_of.h>
# include <ft_printf.h>

typedef struct s_cost	t_cost;
struct s_cost{
	int	a;
	int	b;
	int	index_a;
	int	index_b;
};

typedef struct s_sort	t_sort;
struct s_sort{
	t_stack	*a;
	t_stack	*b;
	int		a_max;
	int		b_max;
	t_cost	cost;
};

extern void	sort_set(t_sort	*set);
extern void	sort_populate(t_sort *set, char **argv);
extern void	sort_push(t_sort *set, char stack);
extern void	sort_sa(t_sort *set, int i);
extern void	sort_sb(t_sort *set, int i);
extern void	sort_ss(t_sort *set, int i);
extern void	sort_ra(t_sort *set, int i);
extern void	sort_rb(t_sort *set, int i);
extern void	sort_rr(t_sort *set, int i);
extern void	sort_rra(t_sort *set, int i);
extern void	sort_rrb(t_sort *set, int i);
extern void	sort_rrr(t_sort *set, int i);
extern int	sort_cheaper(t_sort *set);
extern int	sort_resolve(t_sort *set);
extern void	sort_a_apply(t_sort *set);
extern void	sort_b_apply(t_sort *set);
extern void	sort_pop(t_sort *set);

#endif