/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   descriptor_of.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:39:22 by lde-cast          #+#    #+#             */
/*   Updated: 2023/08/06 05:04:50 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DESCRIPTOR_OF_H
# define DESCRIPTOR_OF_H

typedef struct s_descriptor{
	int	current;
	int	max;
	int	input;
	int	output;
	int	fd[2];
}t_descriptor;

#endif // DESCRIPTOR_OF_H