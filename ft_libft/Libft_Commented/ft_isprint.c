/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:27:40 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 18:01:49 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
** DEFINIÇÃO: 
**
** 
** IMPLEMENTAÇÃO:
** Recebe uma variável do tipo int como um argumento e determina se é imprimível
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftisprint
**
*/
