
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
	set->eat_times = 0;
}

//static void	*life_action(void *data)
//{
//	t_life		*life;
//	t_philo		*philo;
//	static int	act;

//	life = (t_life *)data;
//	if (!life)
//		return (NULL);
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
		man = philo_push(i, set->action->eat, set->action->sleep, set->action->die);
		chained_next_last(&set->thinker, chained_push(man));
		if (i == 0)
			set->man = set->thinker;
		//if (pthread_create(&set->state[i], NULL, &life_action, set) != 0)
		//	perror("failure creating pthread");
	}
}

void join(void)
{
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

	while (set && !set->died)
	{
		upd = set->thinker;
		while (upd)
		{
			if (timer_get(((t_philo *)upd->data)->died))
			{
				set->died = 1;
				printf("%lu %i has died\n",
				((t_philo *)upd->data)->died->interval,
				((t_philo *)upd->data)->id);
				break ;
			}
			if (life_take_fork(set, upd->prev, upd, upd->next)
				&& philo_is(upd->data)
				&& ((t_philo *)upd->data)->action == THINKING)
				timer_set(((t_philo *)upd->data)->died);
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
	philo_create(set);
}
