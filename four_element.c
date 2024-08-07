/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:30:48 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_and_push_b(t_node **stack_a, t_node **stack_b)
{
	int		min;
	t_node	*curr;

	curr = *stack_a;
	min = (*stack_a)->x;
	while (curr != NULL)
	{
		if (curr->x < min)
			min = curr->x;
		curr = curr->next;
	}
	while ((*stack_a)->x != min)
		rotate_a(stack_a);
	push_b(stack_a, stack_b);
}

void	four_element(t_node **stack_a, t_node **stack_b)
{
	find_min_and_push_b(stack_a, stack_b);
	three_element(stack_a);
	push_a(stack_a, stack_b);
}
