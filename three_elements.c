/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:08 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/26 14:47:47 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_elements(Node **stack_a)
{
	if (((*stack_a)->next->next->x > (*stack_a)->x)
		&& (*stack_a)->x > (*stack_a)->next->x)
		swap_a(stack_a);
	if (((*stack_a)->x > (*stack_a)->next->next->x)
		&& ((*stack_a)->next->next->x > (*stack_a)->next->x))
		rotate_a(stack_a);
	if (((*stack_a)->next->x > (*stack_a)->x)
		&& ((*stack_a)->x > (*stack_a)->next->next->x))
		reverse_rotate_a(stack_a);
	if (((*stack_a)->x > (*stack_a)->next->x)
		&& ((*stack_a)->next->x > (*stack_a)->next->next->x))
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	if (((*stack_a)->next->x > (*stack_a)->next->next->x)
		&& ((*stack_a)->next->next->x > (*stack_a)->x))
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}
