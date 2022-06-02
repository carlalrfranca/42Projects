/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:21 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 19:34:06 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = -1;
	if (!src && !dest)
		return (NULL);
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	else
	{
		while (++i < n)
			*d++ = *s++;
	}
	return (dest);
}
/*
** DEFINIÇÃO: 
** Copia n bytes da área de memória src a área de memória dest;
**
** NOTAS: 
** Quando as strings src e dest são NULL, o valor NULL é retormado;
** Parecida com a memcpy, porém o método é mais seguro,na sobreposição dos blocos de memória;
** Ha três variáveis como parâmetros: src como uma cadeia de caracteres inicial; 
** dest como uma cadeia de caracteres para copiar a fonte de dados contido em src;
** n como o número de bytes a serem copiados;
**  
** IMPLEMENTAÇÃO:
** 1 - Cria-se duas variáveis do tipo ponteiro unsigned char para receber as strings contidas no argumento do protótipo;
** 2 - Se não houver strings, não há necessidade de copiar, portanto NULL é retornado.
** 3 - A condição para entrada no loop é: Se o ponteiro de src for menor que o ponteiro de dest;
** 4 - Enquanto o numeros de bytes a serem copiados percorrer inversamente,
** 5 - a string de destino recebe os bytes [portanto o conteúdo] da string de origem
** 6 - senão incrementa as duas strings simultaneamente a medida que são igualadas
** 7 - Retorna a string de destino.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftmemmove
*/

