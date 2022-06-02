/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:58:56 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/13 00:29:18 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_char_conv(va_list args, int *printed, int *index)
{
	unsigned char	digit;

	digit = va_arg(args, int);
	ft_putchar_fd(digit, 1);
	(*index)++;
	(*printed)++;
}
