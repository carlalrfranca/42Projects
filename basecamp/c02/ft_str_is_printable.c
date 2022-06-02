/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:14:53 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 05:03:17 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int i;
	int r;

	i = -1;
	r = 0;
	while (str[++i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
		{
			r = 0;
			break ;
		}
	}
	if (str[i] == '\0')
		r = 1;
	return (r);
}

/*
**int     main(void)
**{
**    char str[] = "";   
**    printf("%d\n", ft_str_is_printable(str));
**    return(0);
**}
*/
