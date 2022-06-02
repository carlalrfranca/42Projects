/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:08 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:36:14 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = -1;
	while (++i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void *)str + i);
	}
	return (NULL);
}

/*
** DEFINIÇÃO: 
** A função procura pela primeira ocorrência de um byte representado como unsigned char no número espedificado de bytes de um objeto.
** Se o byte for encontrado, a função retorna um ponteiro, caso contrário retorna um ponteiro NULL.
**
** NOTAS: 
** Como parâmetro um ponteiro para o objeto a ser examinado; 
** Uma variavel para busca;
** uma variavel com o numero máximo de caracteres para examinar;
** Como valor de retorno ou um poneiro para localização do caractere ou um ponteiro nulo.
** 
** IMPLEMENTAÇÃO:
** 1 - cria um ponteiro de tipo unsigned char para o ponteiro contido nos argumentos do protótipo;
** 2 - cria um index do tipo size_t
** 3 - atribui ao ponteiro um casting do ponteiro contido no protótipo
** 4 - inicializa o índice na posição anterior;
** 5 - começa o loop com a condição do índice já incrementado ser menor do que o tamanho 
** 6 - como condicional a ser satisfeita o ponteiro para a string incrementado deve ser igual a c convertido em casting unsigned char
** 7 - e retorna a string com casting void
** 8 - se a condição não for satisfeita retorna NULL.
** 
** VISUALIZAÇÃO:
** https://tinyurl.com/ftmemchr
*/
