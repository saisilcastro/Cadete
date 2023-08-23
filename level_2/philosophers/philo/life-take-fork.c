/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life-take-fork.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:12:25 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/22 11:29:08 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <philo.h>

static int	left_hand(t_philo *thinker, t_philo *left)
{
	if (thinker->action == EATING)
		return (0);
	if (!(thinker->hand & (1 << LEFT_HAND))
		&& (left->hand & (1 << RIGHT_HAND)))
	{
		thinker->hand |= (1 << LEFT_HAND);
		left->hand &= ~(1 << RIGHT_HAND);
		return (1);
	}
	return (0);
}

static int	right_hand(t_philo *thinker, t_philo *right)
{
	if (thinker->action == EATING)
		return (0);
	if (thinker && right && !(thinker->hand & (1 << RIGHT_HAND))
		&& (right->hand & (1 << LEFT_HAND)))
	{
		thinker->hand |= (1 << RIGHT_HAND);
		right->hand &= ~(1 << LEFT_HAND);
		return (1);
	}
	return (0);
}

int	life_take_fork(t_life *set, t_chained *prev,
	t_chained *thinker, t_chained *next)
{
	t_philo	*philo[3];

	if (!thinker)
		return (0);
	if (prev)
		philo[0] = prev->data;
	else if (chained_last(set->thinker))
		philo[0] = chained_last(set->thinker)->data;
	philo[1] = thinker->data;
	if (next)
		philo[2] = next->data;
	else
		philo[2] = set->thinker->data;
	left_hand(philo[1], philo[0]);
	right_hand(philo[1], philo[2]);
	if ((philo[1]->hand & (1 << LEFT_HAND))
		&& (philo[1]->hand & (1 << RIGHT_HAND)))
		return (1);
	return (0);
}
