/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:31:34 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 19:44:02 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
** DEFINIÇÃO:
** Gera uma string par aum descritor de arquivo (FD), seguido por um '\n'.
** 
** NOTAS: 
** Precisa d euma string de saída
** O descritor de arquivo
** 
** IMPLEMENTAÇÃO:
** É implementado usando duas funções:
** ft_putstr_fd recebe uma string para imprimir na saída;
** ft_putchar_fd para colocar o caractere de quebra de linha;
** 
** VISUALIZAÇÃO:
** https://tinyurl.com/fdputendlft
*/
