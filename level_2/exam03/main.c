/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:32:01 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/20 13:35:43 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inclulde "get_next_line.h"
#include <stdlib.h>

int main(void)
{
	//char	*line;
	int		fd;

	fd = open("test.txt");
	//line = get_next_line(fd);
	//free(line);
	close(fd);
	return (0);
}