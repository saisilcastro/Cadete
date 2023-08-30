/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:21:20 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/29 12:29:42 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MINITALK_BONUS_H
#define MINITALK_BONUS_H

#include <signal.h>
#include <utils.h>

#define	HIGH SIGUSR1
#define LOW	SIGUSR2

typedef struct s_talk	t_talk;
struct s_talk{
	int		enable;
	int		id;
	char	*data;
};

extern int	ft_atoi_base(char *str, int base);
extern void	send_data(t_talk *set, char byte, size_t size);

#endif