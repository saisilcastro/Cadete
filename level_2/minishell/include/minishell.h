/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:24:46 by lde-cast          #+#    #+#             */
/*   Updated: 2023/10/02 17:23:31 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <readline/readline.h>
# include <readline/history.h>
# include <command.h>

typedef struct s_minishell	t_minishell;
struct s_minishell{
	t_command	*cmd;
};

extern void	shell_set(t_minishell *set);
extern void	shell_command(t_minishell *set);
extern void	shell_parse(t_minishell *set, char *command);
extern void	shell_pop(t_minishell *set);

#endif