/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:04:32 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 13:51:47 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	file_set(t_file *set, int fd)
{
	set->pos = 0;
	while (file.pos < BUFFER_SIZE)
		file.buffer[file.pos++] = '\0';
	file.pos = 0;
	file.len = 0;
	file.fd = fd;
	file.string = NULL;
	file.read = read(fd, file.buffer, BUFFER_SIZE);
}

char	*get_next_line(int fd)
{
	static t_file	file;

	if (file.pos == 0 || file.pos >= file.read)
		file_set(&file, fd);
	if (file.read <= 0 || file.buffer[file.pos] == '\0')
		return (NULL);
	return (buffer_load(&file));
}

char	*buffer_load(t_file *set)
{
	while (set->pos < set->read)
	{
		char_next_last(&set->string, char_push(*(set->buffer + set->pos)));
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
	set->pos++;
	set->read++;
	return (get_line_push(set));
}

char	*get_line_push(t_file *set)
{
	t_file	*next;
	char	*line;
	int		i;

	line = (char *)malloc((set->len + 1) * sizeof(char));
	i = 0;
	while (set->string)
	{
		next = set->string->next;
		*(line + i) = set->string->data;
		free(set->string);
		set->string = next;
		i++;
	}
	*(line + i) = '\0';
	return (line);
}
