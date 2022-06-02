/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:55 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 21:57:30 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr	(const char *s, int c)
{
	int	l;

	l = ft_strlen (s);
	while (l >= 0)
	{
		if (*(s + l) == (unsigned char) c)
			return ((char *)(s + l));
		l--;
	}
	return (NULL);
}

/*
** IMPLEMENTAÇÃO:
** Para o tamanho ser alocado inicia-se a função com a condição de que o valor contido na posição do indice deve ser diferente que '\0';
** Se o indice for igual a c ( convertido em um unsigned char) o endereço de s é armazenado em res.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrrchr
*/
