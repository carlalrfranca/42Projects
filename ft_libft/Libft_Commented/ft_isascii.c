/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:27:16 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:00:07 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
** DEFINIÇÃO: 
** Analisa se um caractere é ASCII.
**
** NOTAS: 
** Precisa de uma variável int;
** Retorna inteiro 1 se for ASCII e inteiro 0 caso contrário;
** Necessário o arquivo de cabeçalho #include <ctype.h>
**
** IMPLEMENTAÇÃO:
** 1 - Se o caractere do tipo inteiro for maior ou igual a NULL e 
** menor igual ao caractere de controle de exclusão 
** retorna o inteiro 1 ;
** 2 - Retorna 0 (zero) caso negativo;
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftisascii
*/
