/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:10:01 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_element(t_node **stack_a)
{
	if ((*stack_a)->x > (*stack_a)->next->x)
		swap_a(stack_a);
}
