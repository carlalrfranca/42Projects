/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 00:46:28 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/09 22:17:19 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
/*
** int     main(void)
** {
**    char str [12] = "Hello World";
**
**    printf("%d\n", ft_strlen(str));
**    return (0);
** }
*/