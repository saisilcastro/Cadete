/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:44:53 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 22:39:14 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 150
# endif // BUFFER_SIZE

typedef struct s_byte	t_byte;
struct s_byte{
	char	symbol;
	t_byte	*next;
};

extern t_byte		*byte_push(char set);
extern void			byte_next_last(t_byte **head, t_byte *new);

typedef struct s_file_of{
	int				pos;
	int				read;
	int				len;
	int				fd;
	char			buffer[BUFFER_SIZE];
	t_byte			*string;
}t_file_of;

extern char			*get_next_line(int fd);

extern char			*buffer_load(t_file_of *set);
extern char			*line_push(t_file_of *set);

#endif // GET_NEXT_LINE
