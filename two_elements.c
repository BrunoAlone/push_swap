/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_elements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:17:12 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/26 14:24:56 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_elements(Node **stack_a)
{
	if ((*stack_a)->x > (*stack_a)->next->x)
		swap_a(stack_a);
}
