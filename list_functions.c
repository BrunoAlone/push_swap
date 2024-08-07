/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:58 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_end(t_node **root, int value)
{
	t_node	*new_node;
	t_node	*curr;

	curr = *root;
	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit(1);
	new_node->next = NULL;
	new_node->x = value;
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	while (curr -> next != NULL)
		curr = curr->next;
	curr->next = new_node;
}

void	insert_after(t_node *node, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		exit (1);
	new_node->x = value;
	new_node->next = node->next;
	node->next = new_node;
}

void	insert_sorted_ascending(t_node **root, int value)
{
	t_node	*curr;

	if (*root == NULL || (*root)->x >= value)
	{
		insert_beginning(root, value);
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
	{
		if (curr->next->x >= value)
		{
			insert_after(curr, value);
			return ;
		}
		curr = curr->next;
	}
	insert_after(curr, value);
	return ;
}

void	list_copy(t_node **root, t_node *stack_a)
{
	t_node	*curr;

	curr = stack_a;
	while (curr != NULL)
	{
		insert_sorted_ascending(root, curr->x);
		curr = curr->next;
	}
}

void	deallocate(t_node *root)
{
	t_node	*curr;
	t_node	*aux;

	curr = root;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	root = NULL;
}
