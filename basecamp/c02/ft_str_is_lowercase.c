/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:06:55 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 05:01:50 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	i = -1;
	r = 0;
	while (str[++i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
**    char str[] = "adas";                    
**    printf("%d\n", ft_str_is_lowercase(str));
**    return(0);
**}
*/
