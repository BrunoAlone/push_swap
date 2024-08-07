/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:02:05 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 14:01:17 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	deallocate_r_a(t_node *root, t_node *stack_a)
{
	deallocate(root);
	deallocate(stack_a);
	write(2, "Error\n", 6);
	exit(1);
}
