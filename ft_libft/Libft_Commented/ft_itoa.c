/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:29:41 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:03:03 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_digit(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa (int n)
{
	char		*nstr;
	size_t		dgt;
	long int	nb;

	nb = n;
	dgt = ft_get_digit(n);
	if (n < 0)
	{
		nb *= -1;
		dgt++;
	}
	nstr = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!nstr)
		return (NULL);
	nstr[dgt] = '\0';
	while (dgt--)
	{
		nstr[dgt] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		nstr[0] = '-';
	return (nstr);
}
/*
** DEFINIÇÃO: 
** Converte um integer para um caractere (ascii).
**
** NOTAS: 
** Como argumento um tipo inteiro a ser convertido em char;
** Aloca com a função malloc e retorna no final com '\0';
** Números negativos devem ser considerados, se a alocação falhar retorna NULL.
** 
** IMPLEMENTAÇÃO:
** 1 - Primeiro precisamos saber quantos digitos o número tem. A função ft_get_digit calcula o resultado por meio da divisão por 10;
** 2 - Na função ft_itoa recebe o resultado e considera como condição o tratamento para números negativos;
** 3 - Se for negativo, este é multiplicado por menos um, para converter em positivo. Caso contrário a função ignora a condição.
** 4 - Com o resultado, a função ft_itoa aloca na memória contando o espaço para '\0';
** 5 - Para encontrar o valor do char correspondente, preenche em ordem reversa a string com resultado do módulo adicionado ao valor correspondente do digito pela ascii.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftitoa
*/

