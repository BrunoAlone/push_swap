/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:12:32 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_node **stack_a)
{
	t_node	*curr;
	t_node	*aux;

	if ((*stack_a)->next == NULL)
		return ;
	aux = (*stack_a)->next;
	curr = aux;
	(*stack_a)->next = NULL;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *stack_a;
	*stack_a = aux;
	ft_printf("ra\n");
}
