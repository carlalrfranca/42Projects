/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:03 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 20:01:46 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((unsigned char)c == *(s + i))
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)c == *(s + i))
		return ((char *)s + i);
	return (NULL);
}

/*
** DESCRIÇÃO: 
** Encontra a primeira ocorrẽncia de um caractere;
**
** NOTAS: 
** Precisa de uma string para pesquisa;
** Um caractere a ser pesquisado na string;
** Recebe como argumento um inteiro e é usado como um caractere da tabela ASCII;
** Retorna um ponteiro para a primeira ocorrência do caractere c na string s;
** Se não encontrar, o caracere retorna NULL
** IMPLEMENTAÇÃO:
** 1 - Cria uma variável para o índice do tipo size_t;
** 2 - Inicializa a variável em 0;
** 3 - Começa o loop com a condição de que os valores contidos na string precisam ser diferentes do caractere nulo;
** 4 - Se o valor (convertido para um unsigned char) contido em determinada posição da string for igual ao caractere
** 5 - retorna convertido para um tipo char
** 6 - incrementa o indice para percorrer a string verificando valor por valor em cada posição até que  termine o loop encontrando o caractere nulo.
** 7 - Se o caracte for '\0', é necessário comparar o índice;
** 8 - Se c não for pesquisado, NULL será retornado.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrchr
*/

