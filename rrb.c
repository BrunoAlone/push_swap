/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:50:40 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:52:56 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_node **stack_b)
{
	t_node	*curr;

	curr = *stack_b;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *stack_b;
	curr = *stack_b;
	while (curr->next->next != *stack_b)
		curr = curr->next;
	*stack_b = curr->next;
	curr->next = NULL;
	ft_printf("rrb\n");
}
