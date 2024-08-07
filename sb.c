/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:39:47 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:52:24 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_node **stack_b)
{
	t_node	*aux;

	if ((*stack_b)->next == NULL)
		return ;
	aux = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->next->next;
	aux->next = *stack_b;
	*stack_b = aux;
	ft_printf("sb\n");
}
