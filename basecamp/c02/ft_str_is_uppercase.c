/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:11:04 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/24 11:50:01 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int r;

	i = -1;
	r = 0;
	while (str[++i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
int	main(void)
{
    char str[] = "ADAS";                     
    printf("%d\n", ft_str_is_uppercase(str));
    return(0);
}
*/