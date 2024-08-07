/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:34:40 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 15:12:58 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	atoi_check_char(const char *n, t_node *stack_a)
{
	int	i;

	i = 0;
	if (n[i] == '-' || n[i] == '+')
		i++;
	while (n[i])
	{
		if (n[i] < '0' || n[i] > '9')
			deallocate_r_a(NULL, stack_a);
		i++;
	}
}

void	ft_long_check_atoi(const char *n, t_node *stack_a)
{
	int			i;
	int			sinal;
	long long	result;

	i = 0;
	sinal = 1;
	result = 0;
	while ((n[i] >= 7 && n[i] <= 13) || n[i] == 32)
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			sinal = -1;
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		result = (result * 10) + (n[i] - '0');
		i++;
	}
	result = result * sinal;
	if (result > INT_MAX || result < INT_MIN)
		deallocate_r_a(NULL, stack_a);
}
