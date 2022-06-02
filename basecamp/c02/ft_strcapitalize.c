/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:12:13 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 05:40:50 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int capital;

	i = -1;
	capital = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9'))
		{
			if (capital && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			else if (!capital && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			capital = 0;
		}
		else
			capital = 1;
	}
	return (str);
}

/*
int     main(void)
{
    char str[] = "$aVHH #pode ser";             
    printf("%s\n", ft_strcapitalize(str));
    return(0);
}
*/