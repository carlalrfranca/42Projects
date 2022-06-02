/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:38 by cleticia          #+#    #+#             */
/*   Updated: 2021/06/06 21:57:38 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}

/*
** DEFINIÇÃO: 
** Faz o output do inteiro n recebido no descritor de arquivo, estes vem como parâmetros (FD).
**
** NOTAS: 
** Um inteiro a ser impresso;
** Um descritor de arquivo
** 
** IMPLEMENTAÇÃO:
** se n for menor que 0, faz uma recursão e chama a ft_putchar_fd para escrever o sonal de negativo, em seguida positiva a variável multiplicando por um negativo;
** senão iguala a variavel criada com a recebida por parâmtros ft_putnbr_fd(nbr / 10, fd);
** se este numero for maior que 9, faz a recursão usando como argumento o resto da divisão até obter o primeiro digito (acontecerá recursões tantas vezes for o numero)
** quando chegar a um digito a ft_putchar_fd é acionada, usa o modulo contido em seu argumento para escrever e adicionar o valor correspondente ao caractere zero da tabela ASCII.
** 
** VISUALIZAÇÃO:
** https://tinyurl.com/ftputnbrfd
** 
*/
