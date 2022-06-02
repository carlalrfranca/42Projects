/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 09:25:01 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 19:21:27 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 1)
		ft_putchar('P');
	else
		ft_putchar('N');		
}

/*
**int main(void)
**{
**	int i;
**	i = -1;
**	while (i != 2)
**	{
**		ft_is_negative(i);
**		i++;
**	}
**	return (0);
**}
*/
