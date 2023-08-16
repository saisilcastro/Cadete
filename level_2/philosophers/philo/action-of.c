
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
#include <unistd.h>
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
	set->think = set->die - (set->eat + set->sleep);
	set->eat_times = 0;
}

//static void	*life_action(void *data)
//{
//	t_life		*life;
//	t_philo		*philo;
//	static int	act;

//	life = (t_life *)data;
//	pthread_mutex_lock(&life->change);
//	philo = life->thinker->data;
//	if (act == 0)
//		philo->wait->interval = life->action->eat;
//	else if (act == 1)
//		philo->wait->interval = life->action->sleep;
//	else if (act == 2)
//		philo->wait->interval = life->action->die;
//	else
//		act = 0;
//	philo_is(philo, act);
//	act++;
//	 if (timer_get(philo->died))
//	 	printf("philo %i died\n", philo->id);
//	life->thinker = life->thinker->next;
//	pthread_mutex_unlock(&life->change);
//	return (life);
//}

static void	philo_create(t_life *set)
{
	t_philo		*man;
	int			i;

	if (!set)
		return ;
	set->state = malloc((set->max_philo + 1) * sizeof(pthread_t));
	i = -1;
	while (++i < set->max_philo)
	{
		man = philo_push(i, 0x00, set->action->eat, set->action->die);
		chained_next_last(&set->thinker, chained_push(man));
		if (i == 0)
			set->man = set->thinker;
		//if (pthread_create(&set->state[i], NULL, &life_action, set) != 0)
		//	perror("failure creating pthread");
	}
	//i = -1;
	//while (++i < set->max_philo)
	//{
	//	//printf("%i\n", i);
	//	if (pthread_join(set->state[i], (void **)&set) != 0)
	//		perror("failure join the thread");
	//}
}

void	life_update(t_life *set)
{
	t_chained	*upd;
	int			i;

	if (!set)
		return ;
	while (!set->died)
	{
		upd = set->thinker;
		while (upd)
		{
			i = -1;
			while (++i < 3)
			{
				if (i == 0)
				{
					((t_philo*)upd->data)->wait->interval = set->action->eat;
					philo_is(upd->data, i);
				}
				if (i == 1)
				{
					((t_philo*)upd->data)->wait->interval = set->action->sleep;
					philo_is(upd->data, i);
				}
				if (i == 2)
				{
					((t_philo*)upd->data)->wait->interval = set->action->think;
					philo_is(upd->data, i);
				}
			}
			upd = upd->next;
		}
	}
}

void	life_command(t_life *set, char **command)
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
	set->action->think = set->action->die
		- (set->action->eat + set->action->sleep);
	philo_create(set);
}
