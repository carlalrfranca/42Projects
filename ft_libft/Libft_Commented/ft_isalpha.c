/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:26:44 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 17:42:21 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
** DEFINIÇÃO: 
** Verfica se um caractere é alfabeto ou não
**
** NOTAS: 
** Recebe um único argumento na forma de um inteiro e retorna um valor inteiro;
** Necessário o arquivo de cabeçalho #include <ctype.h>
** 
** IMPLEMENTAÇÃO:
** 1 - Usa a variável do protótipo
** 2 - Se c for maior igual a minusculo e menor igual a z minusculo ou
** 3 - Se c for maior igual A maiusculo e menor igual a Z maiusculo
** 4 - retorna 1 senão retorna 0;
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftisalpha
*/ 
