/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:30:50 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:32:45 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		*(d + i) = *(s + i);
		if (*(s + i) == (unsigned char)c)
			return ((void *)dest + i + 1);
	}
	return (0);
}

/*
** DEFINIÇÃO: 
** Função copia da string de origem para destino até n bytes. Se encontrar o caractere c na de origem para de copiar.
**
** NOTAS: 
** Precisa-se de uma string origem, uma a ser copiada um caractere para parar de copiar quando encontrado e um tamanho em bytes a ser copiado;
** Quando não encontra c o retorno é NULL
** Quando encontra c, retorna o endereço que aponta para o próximo valor de c em dest.
** Necessário casting nos ponteiros do protótipo para unsigned char.
** A variável do tipo size_t é usado para representar o tamanho em bytes e usado como tipo de retorno do sizeof
** 
** IMPLEMENTAÇÃO:
** 1 - Criar duas variáveis do tipo ponteiro unsigned char;
** 2 - Criar uma variável do tipo size_t;
** 3 - Aplicar casting nos ponteiros e atribui os de origem e destino descritos nos argumentos do protótipo;
** 4 - Inicializa a variável indexadora na posição anterior a inicial;
** 5 - Abre-se o loop com a condição While incrementando primeiro o indexador, enquanto for menor que o tamanho;
** 6 - O valor que está na posição i da string d recebe o valor que está na posição i da string s;
** 7 - Compara o valor contido da posição i da string s com o caractere atribuido a variavel c com casting para unsigned char;
** 8 - O loop é encerrado e retorna dest com casting na posição posição seguinte;
** 9 - Não satisfeito as condições, a função retorna NULL;
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftmemccpy

*/
