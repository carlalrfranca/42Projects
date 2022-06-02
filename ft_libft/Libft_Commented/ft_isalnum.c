/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:26:39 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 17:58:10 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/*
** DEFINIÇÃO: 
** Verifica se o argumento passado é um caractere alfanumérico ou não.
**
** NOTAS: 
** Retorna 1 se o char for alfanumérico
** Retorna 0 não for alfabeto ou digito
** Necessário o arquivo de cabeçalho #include <ctype.h>
**
** IMPLEMENTAÇÃO:
** 1 - Se c for maior igual a 'a' minusculo e menor igual a 'z' minúsculo
** 2 - Ou c for maior igual a 'A' maiusculo e menor igual a 'Z' maiúsculo
** 3 - Ou c for meior igual a  0  e menor igual a 9
** 4 - retorna o caractere senão retorna NULL.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftisaunum
*/ 
