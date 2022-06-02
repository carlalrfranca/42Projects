/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:33:19 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:11:38 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base(char c, char *base)
{
	while (*base != '\0')
	{
		if (c == *base)
			return (*base);
		base++;
	}
	return (-1);	
}

int	ft_get_base(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (*base);
		base++;
	}
	return (*base);
}

int	ft_check(char *base)
{
	int	plus;
	
	plus = (*base + 1);
	while (*base)
		base++;
	if (*base < 2)
		return (0);
	*base = 0;
	while (*base)
	{
		if (*base == '-' || *base == '+' || *base == '\f'
			||*base == '\t' || *base == ' ' || *base == '\n'
			||*base == '\r' || *base == '\v')
		return (0);
		while (plus)
		{
			if (*base == plus)
				return (0);
			plus++;
		}
		base++;
	}
	return (1);
}

int	ft_compare(char *str, int *ptri)
{
	int	count;

	while (*str == ' ' || *str == '\t' || *str == '\f'
			|| *str == '\n' || *str == '\r' || *str == '\v')
		str++;
	count = 0;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			count++;
		str++;
	}
	*ptri = *str;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	temp;
	int	res;
	int	div;

	while (*base)
		base++;
	div = *base;
	res = 0;
	temp = 1;
	if (ft_compare(str, (int *)base) % 2)
		temp = -1;
	while (*str && ft_get_base(*str, base))
	{
		res *= div;
		res += ft_base(*str, base);
		str++;
	}
	res *= temp;
	return (res);
}
