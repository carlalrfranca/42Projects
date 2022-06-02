/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:06 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 20:18:57 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	l;
	size_t	i;

	i = -1;
	l = ft_strlen (s1);
	p = (char *) malloc(sizeof (char) * (l + 1));
	if (p == NULL)
		return (NULL);
	while (i++ < l)
		p[i] = s1[i];
	p[i] = '\0';
	return (p);
}

/*
** DEFINIÇÃO: 
** Função usada para duplicar uma string.
**
** NOTAS: 
** Retorna um ponteiro para uma string em bytes;
** O casting é feito com o mesmo tipo do ponteiro.
** A memória obtida é feita dinamicamente usando malloc;
**
** IMPLEMENTAÇÃO:
** 1 - Declara um ponteiro do tipo char, uma variável para o tamanho e um índice ambas size_t;
** 2 - A função começa com a condição; É uma condição para ser lida inversamente, pois se a equação falhar retorna NULL;
** 3 - Caso a regra não se aplica então um while é inicializado com a condição de que o índice for menor que o tamanho;
** 4 - o p recebe o endereço de s1. Através de p consigo alterar s1. Incrementa o contador para percorrer até a condição ser satisfeita;
** 5 - Insere o caractere nulo e retorna o ponteiro.
**
** VISUALIZAÇÃO:
** tinyurl.com/strdupft
*/
