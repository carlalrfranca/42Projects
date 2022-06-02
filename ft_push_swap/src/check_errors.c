/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:33:36 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/14 18:25:48 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long long int	ft_check_limits(t_save *save)
{
	long long int	value;

	save->index = 0;
	while (save->index < save->length)
	{
		value = ft_maxi_atoi(save->input[save->index]);
		if (value > 2147483647 || value < -2147483648)
		{
			ft_free_args(save);
			ft_error_message();
		}
		save->index++;
	}
	save->index = 0;
	return (value);
}

int	ft_check_signal(char *c)
{
	int	aux;
	int	number;

	aux = 0;
	number = 1;
	while (c[aux] != '\0')
	{
		if (c[aux] == '-' || c[aux] == '+')
			aux++;
		else if (c[aux] < 48 || c[aux] > 57)
			number = 0;
		aux++;
	}
	return (number);
}

void	ft_check_digits(t_save *save)
{
	while (save->index < save->length)
	{
		if (ft_check_signal(save->input[save->index]) == 0)
			ft_error_message();
		save->index++;
	}
	save->index = 0;
}

int	ft_decimal(long long decimal)
{
	int	cnt;

	cnt = 0;
	while (decimal != 0)
	{
		decimal = decimal / 10;
		++cnt;
	}
	return (cnt);
}

void	ft_check_duplicate(t_save *save)
{
	long long	max;
	int			aux;
	int			idx;

	max = 2147483647;
	idx = 0;
	while (idx < save->length - 1)
	{
		aux = idx + 1;
		while (aux < save->length)
		{
			if (idx != aux && ft_strncmp(save->input[idx],
					save->input[aux], ft_decimal(max)) == 0)
				ft_error_message();
			aux++;
		}
		idx++;
	}
}
