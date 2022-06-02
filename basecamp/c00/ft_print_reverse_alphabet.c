/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 01:09:58 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/13 00:17:16 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 123;
	while (--c >= 97)
		write (1, &c, 1);
}

/*
**int	main(void)
**{
**	ft_print_reverse_alphabet();
**	return (0);
**}
*/
