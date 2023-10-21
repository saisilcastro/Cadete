/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:15:32 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 22:39:32 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_file_of	file;

	if (file.pos == 0 || file.pos >= file.read)
	{
		file.pos = 0;
		while (file.pos < BUFFER_SIZE)
			file.buffer[file.pos++] = '\0';
		file.pos = 0;
		file.string = NULL;
		file.len = 0;
		file.fd = fd;
		file.read = read(fd, file.buffer, BUFFER_SIZE);
	}
	if (file.read <= 0 || file.buffer[file.pos] == '\0')
		return (NULL);
	return (buffer_load(&file));
}

char	*buffer_load(t_file_of *set)
{
	set->len = 0;
	while (1)
	{
		byte_next_last(&set->string, byte_push(*(set->buffer + set->pos)));
		if (*(set->buffer + set->pos) == '\n'
			|| *(set->buffer + set->pos) == '\0')
			break ;
		set->pos++;
		set->len++;
		if (set->pos >= set->read)
		{
			set->pos = 0;
			set->read = read(set->fd, set->buffer, BUFFER_SIZE);
			if (set->read <= 0)
				break ;
		}
	}
	set->len++;
	set->pos++;
	return (line_push(set));
}

char	*line_push(t_file_of *set)
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
