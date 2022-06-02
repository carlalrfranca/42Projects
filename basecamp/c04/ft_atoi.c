/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:44:10 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/26 03:22:40 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(const char *str)
{
	int	value;
	int	sign;
	int	i;

	i = -1;
	value = 0;
	sign = 1;
	while (str[++i] == ' ' || str[i] == '\n' || str[i] == '\v' 
	        || str[i] == '\t' || str[i] == '\f' || str[i] == '\r')
		;
	if (str[++i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
	}
	while (str[++i] >= 48 && str[i] <= 57)
		value = value * 10 + (str[i] - '0');
	return (value * sign);
}

/*
**int main(void)
**{
**	char *s = "-";
**	printf("ft_atoi : %d\noriginal: %d\n", ft_atoi(s), atoi(s));
**	return (0);
**}

