/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:25 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 19:41:29 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = -1;
	while (++i < len)
		str[i] = (char)c;
	return (str);
}

/*
** DEFINIÇÃO: 
** A função preenche n espaços de uma String com um caractere específico.
** A memset aceita void *b, int c e size_t len como argumento.
** Inicializa variáveis para b, c, e retorna o endereço de b.
**
** NOTAS: 
** Como o caractere c a ser preenchido é fornecido como tipo int, é necessário casting para um caractere sem sinal;
** Quando char é usado em tal ambiente, é alterado para unsigned char e aplicado.
** A memset comporta-se de maneira diversa em ambientes diferentes, unsigned char é usado por convenção.
** Unsigned char tem como característica representar apenas valores positivos, por isso é usado nas funções mem e str;
** Além disso, para endereços de memória não deve-se usar tipos signed, sendo estes padrão.
** O protótipo usa um ponteiro void. Na aritmética de ponteiros recomenda-se o uso de um ponteiro unsigned para operações de ponteiro nulo por razões de compatibilidade.
** Se gravar no endereço da memória um tipo signed, não funcionará corretamente;
** 
** IMPLEMENTAÇÃO:
** 1 - Cria-se variáveis unsigned char e atribui as do protótipo como casting;
** 2 - Como condição, é utilizado o tamanho da String decrementando, a medida que o ponteiro de retorno for incrementando;
** 3 - A String é preenchida com o valor de c (neste caso uso a variável t por conta do casting);
** 4 - Após satisfeito a condição While, retorna o primeiro argumento.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftmemset
*/
