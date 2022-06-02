/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:33:19 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:08:38 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = -1;
	if (*to_find == '\0')
		return (str);
	while (str[++x] != '\0')
	{
		y = -1;
		while (str[x + ++y] == to_find[y] && str[x + y] != '\0')
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
		}
	}
	return (0);
}

/*
int	main()
{
	char str[] = "abcDEFghijklmDEFnopqrstuvwxyz";
	//char fnd[] = "";
	char fnd[] = "DEF";
	printf("%s", ft_strstr(str, fnd));
	return (0);
}
*/
