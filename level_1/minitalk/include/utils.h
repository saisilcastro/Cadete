/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:17:25 by mister-code       #+#    #+#             */
/*   Updated: 2023/09/02 16:25:50 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>

extern void	ft_putchar_fd(char c, int fd);
extern void	ft_putstr_fd(char *str, int fd);
extern void	ft_putnbr_base_fd(int n, char base, char upper, int fd);
extern int	ft_strcmp(char *s1, char *s2);

#endif