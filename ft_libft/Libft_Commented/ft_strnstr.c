/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:50 by cleticia          #+#    #+#             */
/*   Updated: 2021/06/07 16:27:42 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/*
** DEFINIÇÃO: 
** Localiza a primeira ocorrẽncia em uma sequência de caracteres contidos na substring em uma string de origem.
**
** NOTAS: 
** O valor de retorno é do tipo (char *)
** Se o valor contido na substring não for encontrado, NULL é retornado.
**
** IMPLEMENTAÇÃO:
** 1 - cria dois indices i, j para percorrer as strings;
** 2 - Inicia o índice i com o valor 0;
** 3 - Inicializa o loop com a condição: Se o valor da substring for igual ao caractere nulo,
** 4 - retorna o valor da string convertida em um tipo char;
** 5 - Dando sequência a verificação do loop uma segunda condcional foi criada: enquanto o valor contido na string principal for diferente do caractere nulo e 
** o índice i for menor que o tamanho -1;
** 6 - Inicializa o índice j em 0 e a condição para a comparação dos valores contidos nas strings: enquanto os valores da string principal for igual aos valores da substring 
** e os indices forem menor que o tamanho incrementa o indice j para percorrer e se for igal ao caractere nulo retorna a posição do valor da string convertido em char;
** 7 - O loop será repetido com o incremento do índice i que percorrerá a string e se as condições não forem satisfeitas retorna null.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrnstr
*/
