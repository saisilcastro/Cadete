/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:15:32 by lde-cast          #+#    #+#             */
/*   Updated: 2023/06/11 15:41:41 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static t_file_of	file[1024];

	if (fd >= 0 && (file[fd].pos >= file[fd].read || file[fd].pos == 0))
	{
		file[fd].pos = 0;
		if (file[fd].buffer)
			free(file[fd].buffer);
		file[fd].buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		while (file[fd].pos < BUFFER_SIZE)
			file[fd].buffer[file[fd].pos++] = '\0';
		file[fd].pos = 0;
		file[fd].string = NULL;
		file[fd].len = 0;
		file[fd].fd = fd;
		file[fd].read = read(fd, file[fd].buffer, BUFFER_SIZE);
	}
	if (fd < 0 || fd >= 1024 || file[fd].read <= 0
		|| file[fd].buffer[file[fd].pos] == '\0')
		return (NULL);
	return (file_read_line(&file[fd]));
}

char	*file_read_line(t_file_of *set)
{
	set->len = 0;
	while (1)
	{
		byte_next_last(&set->string, byte_get(*(set->buffer + set->pos)));
		if (*(set->buffer + set->pos) == '\n'
			|| *(set->buffer + set->pos) == '\0')
			break ;
		set->pos++;
		set->len++;
		if (set->pos >= set->read)
		{
			if (set->buffer)
				free(set->buffer);
			set->buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
			set->pos = 0;
			set->read = read(set->fd, set->buffer, BUFFER_SIZE);
			if (set->read <= 0)
				break ;
		}
	}
	set->len++;
	set->pos++;
	return (file_get_line(set));
}

char	*file_get_line(t_file_of *set)
{
	t_byte	*next;
	char	*line;
	int		i;

	line = (char *)malloc((set->len + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	next = NULL;
	while (set->string)
	{
		next = set->string->next;
		*(line + i) = set->string->symbol;
		free(set->string);
		set->string = next;
		i++;
	}
	*(line + i) = '\0';
	return (line);
}
