/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:27:32 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:01:09 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	else
		return (0);
}

/*
** DEFINIÇÃO: 
** Verifica se um caractere é numerico ou não
**
** NOTAS: 
** o caractere 48 corresponde ao 0 do tipo inteiro
** o caractere 57 corresponde ao 9 do tipo inteiro
** usar #include <ctype.h>
** 
** IMPLEMENTAÇÃO:
** 1 - Inicia com a condiçao na variavel c sendo maior que o caractere 48 da ASCII
** 2 - E menor igual ao caractere 57 da ASCII retorna o valor de c
** 3 - Se não estiver dentro desse intervalo retorna 0.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftisdigit
*/
