/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:58:29 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 19:09:34 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_char{
	char			data;
	struct s_char	*next;
}t_char;

extern t_char	*char_push(char data);
extern void		char_next_last(t_char **list, t_char *set);

typedef struct s_file	t_file;
struct s_file{
	int		pos;
	int		read;
	int		len;
	int		fd;
	char	buffer[BUFFER_SIZE];
	t_char	*string;
};

extern char		*get_next_line(int fd);
extern char		*buffer_load(t_file *set);
extern char		*get_line_push(t_file *set);

#endif