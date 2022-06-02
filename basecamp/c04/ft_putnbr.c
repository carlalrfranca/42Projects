/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:32:29 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/10 03:40:48 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l >= 10)
		ft_putnbr(l / 10);
	ft_putchar('0' + l % 10);
}
