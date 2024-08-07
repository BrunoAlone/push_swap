/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:34:34 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 14:28:17 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_first(t_node *stack_a, int min, int max)
{
	t_node	*curr;

	curr = stack_a;
	while (curr != NULL)
	{
		if (curr->x == min)
			return (0);
		if (curr->x == max)
			return (1);
		curr = curr->next;
	}
	return (0);
}

void	organize(t_node **stack_a, t_node **stack_b, int min, int max)
{
	t_node	*curr;
	int		control;
	int		i;

	control = 0;
	i = 0;
	curr = *stack_a;
	while (i++ < 5)
	{
		if (curr->x == min)
		{
			push_b(stack_a, stack_b);
			control++;
		}
		else if (curr->x == max)
		{
			push_b(stack_a, stack_b);
			control++;
		}
		else
			rotate_a(stack_a);
		if (control == 2)
			break ;
		curr = *stack_a;
	}
}

int	find_min_and_max_push_b(t_node **stack_a, t_node **stack_b)
{
	int		min;
	int		max;
	int		find;
	t_node	*curr;

	curr = *stack_a;
	min = (*stack_a)->x;
	max = (*stack_a)->x;
	while (curr != NULL)
	{
		if (curr->x < min)
			min = curr->x;
		if (curr->x > max)
			max = curr->x;
		curr = curr->next;
	}
	find = find_the_first(*stack_a, min, max);
	organize(stack_a, stack_b, min, max);
	return (find);
}

/*void	find_max_and_push_b(Node **stack_a, Node **stack_b)
{
	int	max;
	Node	*curr;

	curr = *stack_a;
	max = (*stack_a)->x;
	while (curr != NULL)
	{
		if (curr->x > max)
			max = curr->x;
		curr = curr->next;
	}
	while ((*stack_a)->x != max)

}
*/
void	five_element(t_node **stack_a, t_node **stack_b)
{
	int	find;

	find = find_min_and_max_push_b(stack_a, stack_b);
	three_element(stack_a);
	if (find == 0)
	{
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
		push_a(stack_a, stack_b);
	}
	if (find == 1)
	{
		push_a(stack_a, stack_b);
		push_a(stack_a, stack_b);
		rotate_a(stack_a);
	}
}
