/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:20:30 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:51:52 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "ft_printf/ft_printf.h"

typedef struct t_node
{
	int				x;
	int				simplified_x;
	struct t_node	*next;
}				t_node;

char	**ft_split(char const *s, char c);

int		ft_atoi(const char *n, t_node *stack_a);
int		counting_numbers(const char *s);
int		ft_strcmp(const char *s1, const char *s2);

void	insert_end(t_node **root, int value);
void	deallocate(t_node *root);
void	check_input(t_node *root, t_node *stack_a);
void	insert_sorted_ascending(t_node **root, int value);
void	list_copy(t_node **root, t_node *stack_a);
void	insert_beginning(t_node **root, int value);
void	atoi_check_char(const char *n, t_node *stack_a);
void	ft_long_check_atoi(const char *n, t_node *stack_a);
void	simplify_the_numbers(t_node *root, t_node *stack_a);
void	passing_to_stack_a(t_node *root, t_node *stack_a);
void	swap_a(t_node **stack_a);
void	swap_b(t_node **stack_b);
void	sa_sb(t_node **stack_a, t_node **stack_b);
void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);
void	rotate_a(t_node **stack_a);
void	rotate_b(t_node **stack_b);
void	ra_rb(t_node **stack_a, t_node **satck_b);
void	reverse_rotate_a(t_node **stack_a);
void	reverse_rotate_b(t_node **stack_b);
void	rra_rrb(t_node **stack_a, t_node **stack_b);
void	push_swap(t_node **stack_a, t_node **stack_b);
void	deallocate_r_a(t_node *root, t_node *stack_a);
void	two_element(t_node **stack_a);
void	three_element(t_node **stack_a);
void	four_element(t_node **stack_a, t_node **stack_b);
void	five_element(t_node **stack_a, t_node **stack_b);

#endif
