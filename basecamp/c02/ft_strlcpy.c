/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:22:48 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 05:40:23 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = -1;
	size -=1;
	while (src[++i] && (i < size))
		dest[i] = src[i];
	dest[i] = '\0';
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
	const char src1[10]	= "ab121";
	char dest1[10]   = "12123123";

	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t	nb = 10;
	unsigned int 	nb2 = 10;
	printf("Str: %u\n", strlcpy(dest1, src1, nb2));
	printf("str: %u\n", ft_strlcpy(dest, src, nb));
	return (0);
}
*/
