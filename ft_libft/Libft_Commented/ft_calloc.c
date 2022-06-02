/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:26:35 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:00:31 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	t;

	t = (count * size);
	p = (char *) malloc(t);
	if (p == NULL)
		return (0);
	ft_bzero(p, t);
	return (p);
}
/*
** DEFINIÇÃO: 
** Inicializa os espaços de memória e atribui o valor 0(zero) para cada um.
**
** NOTAS: 
** O casting é feito com o mesmo tipo do ponteiro. 
** É necessário porque malloc retorna um ponteiro do tipo void.
**
** IMPLEMENTAÇÃO:
** 
** Declara um ponteiro do tipo char e aloca a memória;
** Declara uma variável e atribua tamanho;
** Se não recebeu nenhum endereço de memória e por isso não alocou;
** Então retorna zero;
** Se não, zera os espaços com a função ft_bzero e retorna o ponteiro;
** 
** VISUALIZAÇÃO:
** https://tinyurl.com/ftcalloc
*/
