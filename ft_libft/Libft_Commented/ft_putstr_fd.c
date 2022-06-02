/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:42 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 19:46:37 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd > 0)
		return ;
	write(fd, s, ft_strlen (s));
}

/*
** DEFINIÇÃO:
** Imprime strings usando como variáveis um ponteiro de string e um int FD.
**
** NOTAS:
** Usa a função strlen para mensurar o tamanho.
**
** VISUALIZAÇÂO:
** https://tinyurl.com/ftputstrfd
*/
