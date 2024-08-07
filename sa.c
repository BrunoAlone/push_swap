/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:15:25 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_node **stack_a)
{
	t_node	*aux;

	if ((*stack_a)->next == NULL)
		return ;
	aux = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->next->next;
	aux->next = *stack_a;
	*stack_a = aux;
	ft_printf("sa\n");
}
