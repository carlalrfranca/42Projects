/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:33:19 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 21:21:42 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper (int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*
** DEFINIÇÃO: 
** Conversão de minúscula em maiúsculas
**
** NOTAS: 
** Recebe variáveis do tipo inteiro como argumento
** É convertido em char e comparado, e a subtração por 32
** A subtração por 32 tem haver com a distância entre um caractere minúsculo para um maiúsculo
** 
** IMPLEMENTAÇÃO:
** 1 - Inicializa a verificação com a condição if;
** 2 - Se o caractere for maior igual a 'a' e menor igual a 'z'
** 3 - substrai por 32
** 4 - retorna o caractere maiusculo.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/fttoupper
*/
