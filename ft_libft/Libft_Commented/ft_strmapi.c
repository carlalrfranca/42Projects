/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:42 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 20:41:37 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	char			t;

	i = 0;
	t = (sizeof(char) * (ft_strlen(s)) + 1);
	str = (char *)malloc(t);
	if (str == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(str + i) = f(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/*
** DEFINIÇÃO: 
** Aplica o parametro f aos elementos de s em uma matriz unidmensional.
** É uma função que tem como parâmetro uma função.
** É útil quando usa em conjunto com outras funções como por exemplo, converter maiúsculas para minúsculas entre outras.
** 
** NOTAS: 
** Um ponteiro para uma string;
** Um ponteiro para uma função a ser aplicada;
** f recebe como argumento um tipo unsigned int  e um tipo char;
** O retorno de f é uma string do tipo char.
** 
** IMPLEMENTAÇÃO:
** 1 - Para descobrir o tamanho a ser alocado,o comprimento de s é armazenado em ft_strlen + 1 do caractere nulo;
** 2 - Se a alocação falhar retorna NULL;
** 3 - Caso contrário insere '\0' e retorna str.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrmapi
*/
