/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei < brolivei@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:00:33 by brolivei          #+#    #+#             */
/*   Updated: 2023/04/28 13:52:41 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_num_palavras(const char *s, char c)
{
	int	i;
	int	num_palavras;

	i = 0;
	num_palavras = 0;
	while (*s != '\0')
	{
		if (*s != c && i == 0)
		{
			i = 1;
			num_palavras++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (num_palavras);
}

int	ft_tamanho_palavra(const char *s, int i, char c)
{
	int	tamanho;

	tamanho = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		tamanho++;
	}
	return (tamanho);
}

char	*impressao_palavra(const char *s, int i, int tamanho)
{
	char	*dst;
	int		j;

	j = 0;
	dst = malloc((tamanho + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (j < tamanho)
	{
		dst[j++] = s[i];
		i++;
	}
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		num_string;
	int		num_palavras;
	int		tam_palavra;
	char	**array;

	i = 0;
	num_palavras = ft_num_palavras(s, c);
	array = malloc((num_palavras) * sizeof(char *));
	if (!s || !array)
		return (NULL);
	num_string = 0;
	while (num_palavras > 0)
	{
		if (s[i] != c)
		{
			tam_palavra = ft_tamanho_palavra(s, i, c);
			array[num_string++] = impressao_palavra(s, i, tam_palavra);
			i = tam_palavra + i;
			num_palavras--;
		}
		i++;
	}
	return (array);
}
