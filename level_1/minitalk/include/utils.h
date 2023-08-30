/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mister-coder <mister-coder@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:17:25 by mister-code       #+#    #+#             */
/*   Updated: 2023/08/29 12:22:55 by mister-code      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef UTILS_H
#define UTILS_H

#include <unistd.h>

extern void	ft_putchar_fd(char c, int fd);
extern void	ft_putstr_fd(char *str, int fd);
extern void	ft_putnbr_base_fd(int	n, char base, char upper, int fd);
extern int	ft_strcmp(char *s1, char * s2);

#endif