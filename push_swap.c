/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:34:57 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:59:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_of_list(t_node *stack_a)
{
	int		i;
	t_node	*curr;

	i = 0;
	curr = stack_a;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

int	is_empty(t_node *stack)
{
	if (stack == NULL)
		return (1);
	else
		return (0);
}

void	push_swap_radix(t_node **stack_a, t_node **stack_b)
{
	int	max_value;
	int	max_bits;
	int	i;
	int	j;

	max_value = size_of_list(*stack_a) - 1;
	max_bits = 0;
	i = 0;
	j = 0;
	while ((max_value >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		while (j++ <= max_value)
		{
			if ((((*stack_a)->simplified_x >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
		}
		j = 0;
		while (is_empty(*stack_b) != 1)
			push_a(stack_a, stack_b);
		i++;
	}
}

void	push_swap(t_node **stack_a, t_node **stack_b)
{
	int	i;

	i = size_of_list(*stack_a);
	if (i == 2)
		two_element(stack_a);
	if (i == 3)
		three_element(stack_a);
	if (i == 4)
		four_element(stack_a, stack_b);
	if (i == 5)
		five_element(stack_a, stack_b);
	if (i > 5)
		push_swap_radix(stack_a, stack_b);
}
