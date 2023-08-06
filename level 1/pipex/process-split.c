/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process-split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:49:30 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/06 05:15:12 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "process_of.h"

void	process_begin(t_process *process, t_descriptor *descriptor)
{
	if (!process || !process->path || !descriptor)
		return ;
	dup2(descriptor->input, STDIN_FILENO);
	dup2(descriptor->fd[1], STDOUT_FILENO);
	close(descriptor->fd[0]);
	process_execute(process);
}

void	process_between(t_process *current, t_process *preview)
{
	if (!current || !preview)
		return ;
	//dup2(preview->fd[0], STDIN_FILENO);
	//close(preview->fd[0]);
	//dup2(current->fd[1], STDOUT_FILENO);
	//close(current->fd[1]);
	//process_execute(current);
}

void	process_end(t_process *process, t_descriptor *descriptor)
{
	if (!process || !descriptor)
		return ;
	dup2(descriptor->fd[1], STDIN_FILENO);
	char buffer[65535];
	read(descriptor->fd[1], buffer, 65535);
	fprintf(stderr, "**%s", buffer);
	dup2(descriptor->output, STDOUT_FILENO);
	close(descriptor->fd[1]);
	process_execute(process);
}
