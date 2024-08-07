/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_life.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:42:30 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	passing_to_stack_a(t_node *root, t_node *stack_a)
{
	t_node	*curr_root;
	t_node	*curr_stack_a;
	t_node	*aux;

	curr_root = root;
	curr_stack_a = stack_a;
	aux = stack_a;
	while (curr_root != NULL)
	{
		while (curr_stack_a != NULL)
		{
			if (curr_root->x == curr_stack_a->x)
			{
				curr_stack_a->simplified_x = curr_root->simplified_x;
				break ;
			}
			curr_stack_a = curr_stack_a->next;
		}
		curr_stack_a = aux;
		curr_root = curr_root->next;
	}
}

void	simplify_the_numbers(t_node *root, t_node *stack_a)
{
	int		i;
	t_node	*curr;

	curr = root;
	i = 0;
	while (curr != NULL)
	{
		curr->simplified_x = i;
		i++;
		curr = curr->next;
	}
	passing_to_stack_a(root, stack_a);
}
