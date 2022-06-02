/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 01:27:29 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/24 11:53:08 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int r;

	while (*str++ != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			r = 0;
			break ;
		}
	}
	if (*str == '\0')
		r = 1;
	return (r);
}

/*
int     main(void)
{
    char str[] = "adas";
                      
    printf("%d\n", ft_str_is_alpha(str));
    return(0);
}
*/


