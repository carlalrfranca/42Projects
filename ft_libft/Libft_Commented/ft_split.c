/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:55 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 19:47:20 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_make_words(char *word, char const *s, int j, int word_ln)
{
	int	i;

	i = 0;
	while (word_ln > 0)
		word[i++] = s[j - word_ln--];
	word[i] = '\0';
	return (word);
}

static char	**ft_split_words(char **res, char const *s, char c, int word_qt)
{
	int		i;
	int		j;
	int		word_ln;

	i = 0;
	j = 0;
	word_ln = 0;
	while (s[j] && i < word_qt)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_ln++;
		}
		res[i] = (char *)malloc(sizeof(char) * (word_ln + 1));
		if (!res[i])
			return (NULL);
		ft_make_words (res[i], s, j, word_ln);
		word_ln = 0;
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		word_qt;
	char	**res;

	if (s == 0)
		return (NULL);
	word_qt = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_qt + 1));
	if (!res)
		return (NULL);
	ft_split_words (res, s, c, word_qt);
	return (res);
}

/*
** DEFINIÇÃO: 
** Divide uma string, com base em um caractere específico. 
** Também, cria e retorna uma matriz de strings.
** Esta função armazena em um ponteiro duplo.
**
** NOTAS: 
** Um ponteiro para string do tipo const char a ser dividida;
** Um caractere pelo qual a string será dividida;
**
** IMPLEMENTAÇÃO:
** 1 - Em primeiro lugar descobre-se quantas palavras contém a string através da função ft_count_words;
** 2 - Depois aloca a memória e cria uma string de ponteiros;
** 3 - Em seguida ft_split_words divide e cria strings a partir dos ponteiros, também atribui o caractere nulo ao final de cada uma;
** 4 - A função ft_make_words preenche cada espaço do array bidimensional com as palavras.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftsplit
*/
