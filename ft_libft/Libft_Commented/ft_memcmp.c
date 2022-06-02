/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:12 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:42:18 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	if ((unsigned char *)s1 == (unsigned char *)s2)
		return (0);
	while (i < n)
	{
		if (st1[i] != st2[i])
		{
			return (st1[i] - st2[i]);
		}
		else
			i++;
	}
	return (0);
}

/*
** DEFINIÇÃO: 
** Uma função que compara duas strings por n bytes.
** Como parâmetros dois ponteiros para buffers de memoria para comparar;
** 
** NOTAS: 
** Necessário casting nos ponteiros void dos argumentos inseridos no protótipo.
** O casting deve ser do tipo unsigned char;
** 
** IMPLEMENTAÇÃO:
** 1 - Cria dois ponteiros unsigned char, cria um  indice size_t;
** 2 - Atribui aos ponteiros void fazendo casting para unsigned char, inicializa o índice em 0;
** 3 - Como condição para inicialização do loop o indice precisa ser menor que n(o número de bytes a serem preenchidos);
** 4 - Se o valor contido na string 1 for diferente do valor da string 2;
** 5 - Retorna 
** 4 - A segunda condicional compara se os valores contidos nos ponteiros forem iguais
** 5 - A saída do loop ocorre quando mão forem mais iguais;
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftmemcmp
*/
