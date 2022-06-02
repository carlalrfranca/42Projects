/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unsign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:20:17 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/11 21:19:44 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_unsign(unsigned long int number)
{
	int	is_digit;

	is_digit = 0;
	if (number == 0)
		is_digit++;
	while (number != 0)
	{
		number /= 10;
		is_digit++;
	}
	return (is_digit);
}
