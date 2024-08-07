/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:59:47 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:56:00 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*aux;
	t_node	*new_top_of_a;

	if (*stack_a == NULL)
		return ;
	aux = *stack_a;
	new_top_of_a = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = aux;
	*stack_a = new_top_of_a;
	ft_printf("pb\n");
}
