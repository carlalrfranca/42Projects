/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:46 by cleticia          #+#    #+#             */
/*   Updated: 2021/06/07 16:27:49 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	unsigned int	i;

	if (!s1 || !s2 || !n)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return (*(const unsigned char *)&s1[i] - *(const unsigned char *)&s2[i]);
}

/*
** DEFINIÇÃO: 
** É uma função que também faz comparação entre duas strings, porém deve ser especificado o tamanho a ser comparado.
** 
** NOTAS: 
** Duas strings para comparar
** uma variavel tipo size_t para comparar
** necessário #include <string.h>
** 
** IMPLEMENTAÇÃO:
** 1 - criar um índice do tipo size_t;
** 2 - dois ponteiros do tipo unsigned char;
** 3 - atribui as variáveis recém criadas os ponteiros descritos nos argumentos do protótipo convertidos como 
** unsigned char;
** 4 - Inicializo o índice no valor 0;
** 5 - Começo o loop com a condição: enquanto os valores contidos na string1 forem diferentes
** do caractere 0 e o índice menor que o tamanho;
** 6 - e se os valores contidos na string1 forem diferentes dos valores da string2
** 7 - retorno a string1 menos a string2
** 8 - o laço é reiniciado e o índice decrementado para percorrer as strings;
** 9 - uma outra condição que foge do laço é criado:
** 10- se o valore da string1 for igual ao caractere nulo e o índice menor que o tamanho
** 11- retorna a diferença entre a srt1 e str2
** 12- caso contrario o retorno é NULL porque todas as strings são iguais até n;
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrncmp
*/
