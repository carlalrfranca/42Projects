/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:08:17 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/13 00:29:27 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_untoa(unsigned int n)
{
	char				*num_str;
	size_t				dgt;
	unsigned long int	numb;

	numb = n;
	dgt = ft_count_unsign(n);
	num_str = (char *)malloc(sizeof(char) * (dgt + 1));
	if (!num_str)
		return (NULL);
	num_str[dgt] = '\0';
	while (dgt--)
	{
		num_str[dgt] = numb % 10 + '0';
		numb /= 10;
	}
	return (num_str);
}

int	ft_unsigned_int(va_list args, int *printed, int *index)
{
	int				ret;
	unsigned int	number;
	char			*num;

	ret = 0;
	number = va_arg(args, unsigned int);
	num = ft_untoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	(*index)++;
	return (ret);
}

int	ft_int_conv(va_list args, int *printed, int *index)
{
	int		number;
	int		ret;
	char	*num;

	ret = 0;
	number = va_arg(args, int);
	num = ft_itoa(number);
	if (num == NULL)
		return (-1);
	*printed += ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	(*index)++;
	return (ret);
}
