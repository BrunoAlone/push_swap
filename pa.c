/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:46:50 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux;
	t_node	*new_top_of_b;

	if (*stack_b == NULL)
		return ;
	aux = *stack_b;
	new_top_of_b = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = aux;
	*stack_b = new_top_of_b;
	ft_printf("pa\n");
}
