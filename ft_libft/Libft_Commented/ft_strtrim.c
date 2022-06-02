/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:33:04 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 21:29:18 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1++ && ft_strchr (set, *s1))
		;
	i = ft_strlen(s1);
	while (--i && ft_strchr (set, *(s1 + i)))
		;
	return (ft_substr (s1, 0, i + 1));
}

/*
** DEFINIÇÃO
** Trima o caractere inicial e final pré-definido pela variável set.
**
** NOTAS
** Se não houver caractere definido em s1, 0 é adicionado na memória alocada e str é retornado;
** Se a alicação falhar retorna NULL;
** O caractere '\ 0' deve ser incluído no final da string a ser retornada.
**
** IMPLEMENTAÇÃO:
** A ft_strchr ( encontra a primeira ocorrencia do caractere) percorrerá a string set comparando aquele elemento da s1 enviada;
** o indice i deve ser igual ao tamanho de s1 pois será usado para percorrer a string de forma reversa até o momento que encontrar os caracteres diferentes de set;
** Até encontrar um caractere diferente de set, então marca a posição final.
** Retorna com ft_substr (cria uma substring a partir de uma string com posição e tamanho pré-determinado) com o tamanho atualizado, ou seja sem os caracteres retirados.
**
** VISUALIZAÇÃO
** https://tinyurl.com/ftstrtrim
*/
