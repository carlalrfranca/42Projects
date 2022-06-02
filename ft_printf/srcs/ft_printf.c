/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:39:20 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/13 00:29:30 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_no_percent(const char *format, int *index, int *printed)
{
	ft_putchar_fd(format[(*index)], 1);
	(*index)++;
	(*printed)++;
}

static int	ft_percent(const char *format, int *ind, va_list args, int *prntd)
{
	int	ret;

	ret = 0;
	if (format[(*ind)] == 'd' || format[(*ind)] == 'i')
		ret = ft_int_conv(args, prntd, ind);
	else if (format[(*ind)] == 'u')
		ret = ft_unsigned_int(args, prntd, ind);
	else if (format[(*ind)] == 'c')
		ft_char_conv(args, prntd, ind);
	else if (format[(*ind)] == 'x' || format[(*ind)] == 'X'
		|| format[(*ind)] == 'p')
		ret = ft_hexa_conv(args, format[(*ind)], prntd, ind);
	else if (format[(*ind)] == 's')
		ft_str_conv(args, prntd, ind);
	else
	{
		ft_putchar_fd(format[(*ind)], 1);
		(*ind)++;
		(*prntd)++;
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;
	int		index;
	int		printed;

	va_start(args, format);
	if (!format)
		return (-1);
	ret = 0;
	index = 0;
	printed = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			ret = ft_percent(format, &index, args, &printed);
			if (ret == -1)
				return (ret);
		}
		else
			ft_no_percent(format, &index, &printed);
	}
	va_end(args);
	return (printed);
}
