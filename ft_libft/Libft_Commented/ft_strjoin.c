/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 23:32:11 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/12 21:20:49 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	slen;
	size_t	total;

	slen = ft_strlen(s1) + 1;
	total = ft_strlen(s2) + slen;
	new = (char *)malloc(total * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy (new, s1, slen);
	ft_strlcat (new, s2, total);
	return (new);
}

/*
** DEFINIÇÃO:
** Uma função que retorna duas strings recebidas como argumentos.
**
** NOTAS:
** A String 1 vem no inicio seguida da String 2;
** Retorna NULL quando a alocação de memória falha;
** O caractere '/0' deve estar no final da string combinada.
**
** IMPLEMENTAÇÃO:
** Primeiramente deve-se atribuir variáveis as strings e mensurar o tamanho das duas com a função ft_strlen;
** Se a alocação falhar retorna NULL;
** A função ft_strlcpy preenche a variável new com o conteúdo da String1, já considerando o tamanho total e o byte para o caractere NULL;
** A ft_strlcat passa a new (que já está com o conteúdo da String1) e a String2 para a função concatenar na própria new, 
** e o total é o parâmetro com todos os bytes.
** Retorna a string completa.
**
** VISUALIZAÇÃO:
** https://tinyurl.com/ftstrjoin
*/
