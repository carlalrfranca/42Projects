/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:31:55 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/14 16:12:13 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_radix_sort(t_save *save)
{
	t_node	*headb;
	int		value;
	int		max;
	int		cnt;
	int		aux;

	max = 0;
	headb = NULL;
	value = save->length;
	while ((value >> max) != 0)
		++max;
	cnt = 0;
	while (cnt < max)
	{
		aux = 0;
		while (aux < value)
		{
			ft_bit_compare(save, &headb, cnt);
			aux++;
		}
		while (headb != NULL)
			ft_pa(save, &headb);
		cnt++;
	}
}

void	ft_small_stack(t_save *save)
{
	t_node	*headb;
	int		len;
	int		aux;

	headb = NULL;
	len = save->length;
	if (len == 2)
		ft_ra(save);
	else if (len == 3)
		ft_sort_three(save, &headb);
	else if (len > 3)
	{
		aux = 0;
		ft_put_stackb(save, &headb);
		ft_sort_three(save, &headb);
		while (aux < len - 3)
		{
			ft_pa(save, &headb);
			aux++;
		}
	}
}

void	ft_check_sort(t_save *save)
{
	if (save->length < 6)
		ft_small_stack(save);
	else
		ft_radix_sort(save);
	ft_free_args(save);
	exit(0);
}

int	ft_is_sorted(t_save *save)
{
	t_node	*tmp;
	int		cnt;

	cnt = 1;
	tmp = save->head;
	while (cnt < save->length)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
		cnt++;
	}
	return (1);
}

void	ft_verify_sorted(t_save *save)
{
	int	sorted;

	sorted = ft_is_sorted(save);
	if (sorted == 1)
	{
		ft_free_list(save);
		exit(0);
	}
	ft_check_sort(save);
}
