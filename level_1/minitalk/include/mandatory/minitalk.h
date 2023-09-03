/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 06:20:25 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/02 16:26:16 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <utils.h>

typedef struct s_talk	t_talk;
struct s_talk{
	int	enable;
	int	id;
};

extern int	ft_atoi_base(char *str, int base);

#endif