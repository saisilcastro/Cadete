
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
	set->eat_times = 0;
}

static void	*life_update(void *data)
{
	t_life		*life;
	t_chained	*upd;
	int			act;

	life = data;
	while (1)
	{
		upd = life->man;
		while (upd)
		{
			pthread_mutex_lock(&life->change);
			act = 0;
			while (act < 3)
			{
				if (act == 0)
				{
					((t_philo *)upd->data)->wait->interval = life->action->eat;
					philo_has_taken(upd->data);
					if (philo_is(upd->data, 0))
						act++;
				}
				else if (act == 1)
				{
					((t_philo *)upd->data)->wait->interval = life->action->sleep;
					if (philo_is(upd->data, 1))
						act++;
				}				
				else if (act == 2)
				{
					((t_philo *)upd->data)->wait->interval = life->action->die;
					if (philo_is(upd->data, 2))
						act++;
				}
			}
			pthread_mutex_unlock(&life->change);
			upd = upd->next;
		}
	}
	return (NULL);
}

static void	philo_create(t_life *set)
{
	t_philo		*man;
	t_chained	*upd;
	int		i;

	if (!set)
		return ;
	i = -1;
	while (++i < set->max_philo)
	{
		man = philo_push(i, 0x00, set->action->eat);
		pthread_create(&man->state, NULL, life_update, set);
		chained_next_last(&set->man, chained_push(man));
	}		
	upd = set->man;
	while (upd)
	{
		man = upd->data;
		pthread_join(man->state, NULL);
		upd = upd->next;
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
