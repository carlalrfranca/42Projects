/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:58:30 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/10 00:23:35 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);	
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	j;
	char			*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		j = str[i];
		if (printable(j) == 1)
			ft_putchar(j);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[j / 16]);
			ft_putchar(hex[j % 16]);
		}
		i++;
	}
}

/*
int main()
{
	ft_putstr_non_printable("Hello\nWhat's up");
}
*/