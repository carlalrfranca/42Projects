/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 01:24:05 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 19:25:15 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = 47;
	while (++n <= 57)
		write (1, &n, 1);
}

/*
**int	main(void)
**{
** ft_print_numbers();
** return(0);
**}
*/
