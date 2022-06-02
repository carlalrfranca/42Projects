/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:59:56 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 19:21:34 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (++c <= 122)
		write (1, &c, 1);
}
/*
**int	main(void)
**{
** ft_print_alphabet();
** return (0);
**}
*/
