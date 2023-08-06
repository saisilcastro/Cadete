
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action-of.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:36:27 by mister-code       #+#    #+#             */
/*   Updated: 2023/07/29 22:44:26 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <life.h>
#include <philo.h>
#include <utils.h>
#include <string.h>

void	agenda_set(t_agenda *set, double eat, double sleep, double die)
{
	if (!set)
		return ;
	set->eat = eat;
	set->sleep = sleep;
	set->die = die;
	set->think = 100;
	set->eat_times = 0;
}

void	life_update(t_life *life)
{
	t_chained	*upd;

	while (life->running)
	{
		upd = life->man;
		while (upd)
		{
			life->philo = upd->data;
			upd = upd->next;
		}
	}
}

void	*life_time(t_life *set)
{
	if (!set)
		return (NULL);
	if (philo_death(set->philo))
		set->running = 0;
	return (NULL);
}

static void	philo_create(t_life *set)
{
	t_philo		*man;
	int		i;

	if (!set)
		return ;
	i = -1;
	while (++i < set->max_philo)
	{
		man = philo_push(i, 0x00, set->action->eat);
		if (man)
		{
			timer_start(man->death, set->action->die);
			pthread_create(&man->state, NULL, (void *)life_time, set);
			chained_next_last(&set->man, chained_push(man));
		}
	}
}

void	 life_command(t_life *set, char **command)
{
	int	i;

	if (!set)
		return ;
	command++;
	i = 0;
	while (*(command + i))
	{
		if (i == 0)
			set->max_philo = ft_atol_base_unsigned(*(command + i), 10);
		else if (i == 1)
			set->action->die = ft_atol_base_unsigned(*(command + i), 10);
		else if (i == 2)
			set->action->eat = ft_atol_base_unsigned(*(command + i), 10);
		else if (i == 3)
			set->action->sleep = ft_atol_base_unsigned(*(command + i), 10);
		i++;
	}
	philo_create(set);
}
