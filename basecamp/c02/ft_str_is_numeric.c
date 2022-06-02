/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 08:26:25 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/24 11:49:17 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int r;

	i = -1;
	r = 0;
	while (str[++i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
**
**int	main(void)
**{
**    char str[] = "";                   
**    printf("%d\n", ft_str_is_numeric(str));
**    return(0);
**}
*/