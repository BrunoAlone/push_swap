/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:19:37 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 16:01:35 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_list_1(t_node **stack_a, char *argv)
{
	int		i;
	int		n_numbers;
	char	**n;

	i = 0;
	n = ft_split(argv, ' ');
	n_numbers = counting_numbers(argv);
	while (n_numbers > 0)
	{
		insert_end(stack_a, ft_atoi(n[i], *stack_a));
		i++;
		n_numbers--;
	}
	i -= 1;
	while (i >= 0)
	{
		free(n[i]);
		i--;
	}
	free(n);
}

void	initialize_list_2(t_node **stack_a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		insert_end(stack_a, ft_atoi(argv[i], *stack_a));
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*root;

	stack_a = NULL;
	stack_b = NULL;
	root = NULL;
	if (argc <= 1)
		return (0);
	if (argc == 2)
		initialize_list_1(&stack_a, argv[1]);
	if (argc > 2)
		initialize_list_2(&stack_a, argc, argv);
	list_copy(&root, stack_a);
	check_input(root, stack_a);
	simplify_the_numbers(root, stack_a);
	push_swap(&stack_a, &stack_b);
	deallocate(stack_a);
	deallocate(stack_b);
	deallocate(root);
	return (0);
}
	//O proximo passo será, agora que temos a lista de números
	//organizada de forma ascendente no lista inicializada com root:
	//	- Verificar erros(Se existem números duplicados, se existem caracteres
	//que não são números, se estão todos no range dos ints...)(DONE)
	//	- Dar o número simplificado a cada um deles.(DONE)
	//	- Contruir o push_swap.(Done)
	//	- Verificar se a lista já está organizada.
