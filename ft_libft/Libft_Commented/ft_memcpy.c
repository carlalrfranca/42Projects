/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:16 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:44:49 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)source;
	if (!d && !s)
		return (NULL);
	while (num--)
		*(d++) = *(s++);
	return (dest);
}

/*
** DEFINIÇÃO: 
** Copia uma String de origem para uma de destino.
**
** NOTAS: 
** Ao contrário de outras funções str, este não verifica '\0' da fonte;
** Se as Strings de destino e origem forem iguais, nada é feito e retorna o endereço da String dest;
** Necessário casting com tipo unsigned char para os ponteiros do protótipo;
** 
** IMPLEMENTAÇÃO:
** 1 - Cria dois ponteiros para as Strings passadas como argumento do protótipo;
** 2 - Aplica o casting atribuindo os ponteiros dest e source;
** 3 - Define como retorno nulo se as variáveis estiverem zeradas;
** 4 - Como condição, enquanto  num (o número de bytes a serem preenchidos) é decrementado,
** a medida que os ponteiros são copiados e incrementados.
** 5 - Após satisfeita a condição a função retorna o endereço de destino.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftmemcpy
**
*/
