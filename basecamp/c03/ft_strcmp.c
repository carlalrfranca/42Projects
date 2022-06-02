/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:32:29 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:04:31 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = -1;
	while (s1[++i] && s2[i] && s1[i] == s2[i])
		;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int		main(void)
{
	printf("ft_strcmp : %d\n", ft_strcmp("test", "teste"));
	printf("strcmp : %d\n", strcmp("test", "teste"));
}
*/