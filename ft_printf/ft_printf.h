/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 03:33:57 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/13 00:29:03 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int		ft_unsigned_int(va_list args, int *printed, int *index);

int		ft_int_conv(va_list args, int *printed, int *index);

void	ft_char_conv(va_list args, int *printed, int *index);

void	ft_str_conv(va_list args, int *printed, int *index);

int		ft_hexa_conv(va_list args, char to_conv, int *printed, int *index);

#endif
