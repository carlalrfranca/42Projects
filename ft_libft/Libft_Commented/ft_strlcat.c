/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:15 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 20:22:24 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srlen;
	size_t	dtlen;

	i = 0;
	srlen = ft_strlen(src);
	dtlen = ft_strlen(dst);
	if (size <= dtlen)
		return (srlen + size);
	while (dtlen + 1 + i < size && src[i] != '\0')
	{
		dst[dtlen + i] = src[i];
		i++;
	}
	dst[dtlen + i] = '\0';
	return (dtlen + srlen);
}

/*
** DEFINIÇÃO: 
** Concatena uma string de tamanho limitado;
**
** NOTAS: 
** src é concatenado a dst, mas o comprimento total de dst deve ser menor que o tamanho;
** necessário flag especial para compilar : gcc -Wall -Wextra -Werror -lbsd ft_strlcat.c ft_strlen.c -o arquivo
** necessário #include <bsd/string.h>
** 
** IMPLEMENTAÇÃO:
** 1 - Criar três variaveis uma para o índice e as outras para receber a função strlen;
** 2 - Inicialize o índice em 0;
** 3 - Atribua as variaveis a função que verifica o tamanho e como argumento cada qual as strings;
** 4 - Se o comprimento de dst + 1 for maior que size, o comprimento de src + size será retornado;
** 5 - Copie enquanto dtlen + 1  + indice for menor que size e src e diferente do caractere nulo;
** 6 - coloque  o caractere nulo no final de dst e retorna dtlen e srlen.
** 
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrlcat
*/

