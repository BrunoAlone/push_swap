/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:10:51 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *n, t_node *stack_a)
{
	int	i;
	int	sinal;
	int	result;

	i = 0;
	sinal = 1;
	result = 0;
	ft_long_check_atoi(n, stack_a);
	while ((n[i] >= 7 && n[i] <= 13) || n[i] == 32)
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			sinal = -1;
		i++;
	}
	atoi_check_char(n, stack_a);
	while (n[i] >= '0' && n[i] <= '9')
	{
		result = (result * 10) + (n[i] - '0');
		i++;
	}
	return (result * sinal);
}
