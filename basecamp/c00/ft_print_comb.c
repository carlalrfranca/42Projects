/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:34:06 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:44:01 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = 47;
	while (++x <= '7')
	{
		y = x + 1;
		while (++y <= '8')
		{
			z = y + 1;
			while (++z <= '9')
			{
				write (1, &x, 1);
				write (1, &y, 1);
				write (1, &z, 1);
				if (x != '7' || y != '8' || z != '9')
					write (1, ", ", 2);
			}
		}
	}
}

/*
**int	main(void)
**{
**  ft_print_comb();
**  return(0);
**}
*/
