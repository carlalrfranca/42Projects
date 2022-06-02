/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:33:13 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 21:22:09 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower (int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*
** DEFINIÇÃO: 
** Converte letras maiúsculas para minúsculas
**
** NOTAS: 
** Recebe variáveis do tipo inteiro como argumento
** É convertido em char e verificado se faz parte do alfabeto maiúsculo;
** Caso positivo, soma por 32;
** A soma por 32 tem haver com a distância entre um caractere maiúsculo para um minusculo.
** 
** IMPLEMENTAÇÃO:
** 1 - Inicializa a verificação com a condição if;
** 2 - Se o caractere for maior igual a 'A' e menor igual a 'Z'
** 3 - soma por 32
** 4 - retorna o caractere minúsculo.
** 
** VISUALIZAÇÃO:
** https://tinyurl.com/fttollower
*/
