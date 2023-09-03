
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

void	*life_action_(void *data)
{
	t_life		*life;
	t_chained	*upd;

	life = (t_life *)data;
	if (!life_going(data))
		return (NULL);
	upd = life->thinker;
	pthread_mutex_lock(&life->change);
	if (philo_died(life->thinker->data, life->begin))
	{
		life->died = 1;
		return (life);
	}
	if (life_take_fork(life, upd->prev, upd, upd->next)
			&& philo_is(upd->data, life->begin)
			&& ((t_philo *)upd->data)->action == THINKING)
	{
		timer_set(((t_philo *)upd->data)->died);
	}
	life->thinker = life->thinker->next;
	if (life->thinker == NULL)
		life->thinker = life->man;
	pthread_mutex_unlock(&life->change);
	return (life);
}

static void	*life_action(void *data)
{
	t_life		*life;

	life = (t_life *)data;
	if (!life_going(data))
	{
		printf("life's not going\n");
		return (NULL);
	}
	printf("%i\n", ((t_philo *)life->man->data)->id);
	pthread_mutex_lock(&life->change);
	life->man = life->man->next;
	if (life->man == NULL)
		life->man = life->thinker;
	pthread_mutex_unlock(&life->change);
	return (life);
}

static void	philo_create(t_life *set)
{
	t_philo			*man;
	int				i;
	t_timer			time;

	if (!set)
		return ;
	set->state = malloc((set->max_philo + 1) * sizeof(pthread_t));
	i = -1;
	while (++i < set->max_philo)
	{
		man = philo_push(i, set->action->eat, set->action->sleep, set->action->die);
		chained_next_last(&set->thinker, chained_push(man));
		if (pthread_create(&set->state[i], NULL, &life_action, set) != 0)
			perror("failure creating pthread");
	}
	time.begin = 0;
	set->begin = timer_elapsed(&time);
	set->man = set->thinker;
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
	int	i;

	i = 0;
	while (set && !set->died)
	{
		if (((t_philo *)set->man->data)->action == FLOATING)
			((t_philo *)set->man->data)->action = EATING;
		if (pthread_join(set->state[i], (void **)&set) != 0)
		{
			i++;
			if (set->max_philo >= i)
				i = 0;
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
