/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:08:12 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 14:38:32 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	doubles_for_check(t_node *root, t_node *stack_a)
{
	t_node	*curr;

	curr = root;
	while (curr->next != NULL)
	{
		if (curr->x == curr->next->x)
			deallocate_r_a(root, stack_a);
		curr = curr->next;
	}
}
	//A funcao Atoi neste programa esta adaptada para
//verificar caso o input tenha caracteres
//que nao sao numeros.

void	is_it_organized_yet(t_node *root, t_node *stack_a)
{
	t_node	*curr_root;
	t_node	*curr_stack;

	curr_root = root;
	curr_stack = stack_a;
	while (curr_root != NULL)
	{
		if (curr_root->x != curr_stack->x)
			return ;
		curr_stack = curr_stack->next;
		curr_root = curr_root->next;
	}
	deallocate(root);
	deallocate(stack_a);
	exit(1);
}

void	check_input(t_node *root, t_node *stack_a)
{
	doubles_for_check(root, stack_a);
	is_it_organized_yet(root, stack_a);
}
