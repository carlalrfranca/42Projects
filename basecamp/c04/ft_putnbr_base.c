/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:44:10 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/26 04:22:18 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	while (*str != '\0')
		str++;
	return (*str);
}

int	ft_check(char *base)
{
	int	plus;

	if (ft_strlen(base) < 2)
		return (0);
	*base = 0;
	while (*base)
	{
		if (*base == '-'|| *base == '+'|| *base < 32 || *base > 126)
			return (0);
		plus = *base + 1;
		while (plus++)
		{
			if (*base == plus)
			return (0);
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l;
	char	c[32];
	int		div;
	int		i;

	if (!ft_check(base))
		return ;
	div = ft_strlen(base);
	if (nbr < 0)
	{
		l = nbr;
		l = -l;
		ft_putchar('-');
	}
	else
		l = nbr;
	i = 0;
	while (l > 0)
	{
		c[i] = base[l % div];
		l /= div;
		i++;
	}
	while (--i >= 0)
		ft_putchar(c[i]);
}

