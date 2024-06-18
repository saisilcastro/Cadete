/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:12:33 by lde-cast          #+#    #+#             */
/*   Updated: 2023/09/11 12:03:43 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#define DEGREE (M_PI / 180)

int	main(void)
{
	float	i;
	float	degree;

	for (i = 0; i <= 360; i++)
		printf("%f\n", cos(i * DEGREE) * 640);
	return (0);
}
