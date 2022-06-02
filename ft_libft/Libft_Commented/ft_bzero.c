/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:26:28 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 17:39:17 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (n--)
		*(ret++) = 0;
	return ;
}

/*
** DEFINIÇÃO: 
** Zera a região da memória, às vezes a memória dinâmica, para limpá-la dos valores. 
**
** NOTAS: 
** Precisa de casting com o ponteiro void para um unsigned char;
** Se n for zero a função não faz nada;
** 
** IMPLEMENTAÇÃO:
** 1 - Cria um ponteiro como unsigned char;
** 2 - Aplica-se o casting atribuindo o ponteiro void contido nos argumentos do protótipo;
** 3 - Enquanto n (o número de bytes a serem preenchidos a partir de *s),
** for decrementado, o ponteiro percorre a string e zera os espaços.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftbzero
*/
