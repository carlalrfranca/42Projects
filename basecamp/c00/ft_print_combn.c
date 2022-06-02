/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:03:30 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/11 05:03:08 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int *t, int size)
{
	int	index;
	int	lower;

	index = -1;
	lower = 1;
	while (++index < size)
	{
		if (t[index - 1] >= t[index])
			lower = 0;
	}
	if (lower)
	{
		index = 0;
		while (index < size)
			ft_putchar(t[index++] + '0');
		if (t[0] < (10 - size))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	index;
	int	tab[10];

	index = 0;
	if (n == 1)
		while (index < 10)
			ft_putchar(index++ + '0');
	while (index < n)
		tab[index++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		index = n;
		while (index && n > 1)
		{
			index--;
			if (tab[index] > 9)
			{
				tab[index - 1]++;
				tab[index] = 0;
			}
		}
	}
}

/*
** 
**int	main(void)
**{
**	int n;
**	n = 2;
**	
**	ft_print_combn(n);
**	return (0); 
**}
*/
