/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:22:45 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 05:27:10 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while ((*tmp++ = *src++) != 0)
		;
	return (dest);
}

/*
#include <stdio.h>
int     main(void)
{
    char src [12] = "Hello World";
    char dest [12];          
	  ft_strcpy(dest, src); 
      printf("before:%s\nafter :%s\n", src,  dest);
     return(0);
}
*/