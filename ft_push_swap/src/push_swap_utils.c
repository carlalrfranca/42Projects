/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:33:36 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/13 02:15:52 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_free_list(t_save *save)
{
	t_node	*tmp;

	save->head->prev->next = NULL;
	save->head->prev = NULL;
	tmp = save->head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(tmp->prev);
		tmp->prev = NULL;
	}
	free(tmp);
	tmp = NULL;
}

long long int	ft_maxi_atoi(const char *str)
{
	long long int	res;
	int				sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

void	ft_free_args(t_save *save)
{
	int	cnt;

	cnt = -1;
	while (++cnt < save->length)
		free(save->input[cnt]);
}
