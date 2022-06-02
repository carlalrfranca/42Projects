/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:33:08 by cleticia          #+#    #+#             */
/*   Updated: 2021/06/06 22:42:42 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr (char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*new;
	size_t	l;
	size_t	i;

	l = ft_strlen(s);
	if (s == NULL || l < start)
		return (ft_strdup(""));
	if (start + len < l)
		sub = (char *)malloc((len + 1) * sizeof(char));
	else
		sub = (char *)malloc((l - start + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = start;
	new = sub;
	while (i < (start + len) && *(s + i))
		*new++ = *(s + i++);
	*new = '\0';
	return (sub);
}

/*
** DEFINIÇÃO:
** cria uma substring a partir de uma string com posição e tamanho pré-determinado.
** 
** NOTAS:
** Como parâmetros: A string a partir da qual cria a substring, o índice inicial da substring e o tamanho da substring.
**
** IMPLEMENTAÇÃO: 
** Primero tira  tamanho da string, se este tamanho for menor do que o start que é a variavel que aponta a posicao na qual vc copia
** se for menor do que start voce retorna uma vazia
** se start mais o total de bytes que devera ser copiado dor menor do que o tamanho da string voce aloca pois terá os bytes sufientes (aloca len +1)
** se o start + len for maior do que o tamanho da string, ele aloca o tamanho da string menos start + 1

** VISUALIZAÇÃO:
** https://tinyurl.com/ftsubstr
*/
