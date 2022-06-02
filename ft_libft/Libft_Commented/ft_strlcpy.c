/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:19 by cleticia          #+#    #+#             */
/*   Updated: 2021/06/07 16:27:19 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
** DEFINIÇÃO: 
** Copia uma string subscrevendo a anterior caso tenha.
** Necessário uma string de destino para alocar a string copiada;
** Uma string de origem a ser copiada;
** e uma variável com o tamanho de memória a ser copiada;
** 
** NOTAS: 
** Para conferir com a strlcpy priginal precisa da flag -lbsd
** Adicionar #include <BSD/string.h>
** gcc -Wall -Wextra -Werror -lbsd ft_strlcpy.c ft_strlen.c -o arquivo
** 
** IMPLEMENTAÇÃO:
** 1 - Cria duas variáveis do tipo size_t;
** 2 - Uma para o índice e outra de no me size;
** 2 - Inicializa o índice com 0;
** 3 - Atribui a variável size a função ft_strlen inserindo como argumento o endereço de origem (SRC);
** 4 - A função ft_strlen inserindo como argumento o endereço de origem (SRC);
** 5 - Se dst ou src for null, o retorno é 0;
** 6 - Se dize (o número de bytes a serem preenchidos) for 0, o comprimento de src é retornado;
** 7 - Enquanto src for diferente de 0 for menor que dize -1
** 8 - dst recebe src a medida que o índice é incrementado percorrendo a string;
** 9 - Adicione ao final de dst o caracte nulo e retorne o comprimento de src.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrlcpy
*/
