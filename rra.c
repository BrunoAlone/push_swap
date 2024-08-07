/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:33:33 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_node **stack_a)
{
	t_node	*curr;

	curr = *stack_a;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = *stack_a;
	curr = *stack_a;
	while (curr->next->next != *stack_a)
		curr = curr->next;
	*stack_a = curr->next;
	curr->next = NULL;
	ft_printf("rra\n");
}
