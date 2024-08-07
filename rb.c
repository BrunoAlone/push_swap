/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:29:07 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:55:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_node **stack_b)
{
	t_node	*curr;
	t_node	*aux;

	if ((*stack_b)->next == NULL)
		return ;
	aux = (*stack_b)->next;
	curr = aux;
	(*stack_b)->next = NULL;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *stack_b;
	*stack_b = aux;
	ft_printf("rb\n");
}
