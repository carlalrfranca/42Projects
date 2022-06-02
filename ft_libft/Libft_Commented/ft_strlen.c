/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:34 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 20:40:21 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = -1;
	while (*(str + index++) != '\0')
		;
	return (index);
}
/*
** DEFINIÇÃO: 
** determina o tamanho de uma string sem considerar a null.
** 
** NOTAS: 
** O valor de retorno é um size_t;
** O ponteiro é um const char, ou seja os dados não podem ser alterados;
** O índice é do tipo size_t;
** 
** IMPLEMENTAÇÃO:
** 1 - Declara o índice de tipo size_t da variável str para obter o comprimento da string; 
** 2 - Inicializa o índice em 0;
** 3 - A condição para inicializar o loop é que o valor contido na posição da string deve ser diferent do caractere nulo;
** 4 - Para percorrer a string incrementa o índice;
** 5 - o final do loop retorna o índice.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/strlenft
*/