/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:30:00 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 01:30:13 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57)
		|| (arg >= 'A' && arg <= 'Z')
		|| (arg >= 'a' && arg <= 'z'))
		return (1);
	else
		return (0);
}
