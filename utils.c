/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:15:10 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:09 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
			Nesta funcao contamos os numeros que existem na string passada.
*/
int	counting_numbers(const char *s)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && j == 0)
		{
			j = 1;
			x++;
		}
		else if (s[i] == ' ')
			j = 0;
		i++;
	}
	return (x);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
