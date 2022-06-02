/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:31:55 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/18 15:45:11 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_find_less(t_save *save, t_node **tmp, int aux)
{
	int	cnt;

	cnt = 1;
	while (cnt <= save->length - aux)
	{
		if ((*tmp)->data != aux && (*tmp)->prev->data != aux)
		{
			(*tmp) = (*tmp)->next;
			save->head = (*tmp);
			ft_putendl_fd("ra", 1);
		}
		else if ((*tmp)->data != aux && (*tmp)->prev->data == aux)
		{
			(*tmp) = (*tmp)->prev;
			save->head = (*tmp);
			ft_putendl_fd("rra", 1);
		}
		cnt++;
	}
}

void	ft_sort_three(t_save *save, t_node **headb)
{
	int		next;
	int		prev;
	int		prev_next;

	prev_next = save->head->prev->data > save->head->next->data;
	prev = save->head->data > save->head->prev->data;
	next = save->head->data > save->head->next->data;
	if (!next && prev)
		ft_rra (save);
	else if (!prev_next && !prev)
	{
		ft_pb (&(save->head), save, headb);
		ft_sa (save);
		ft_pa (save, headb);
	}
	else if (!prev_next && next)
	{
		ft_sa (save);
		ft_rra (save);
	}
	else if (prev_next && prev)
		ft_ra (save);
	else if (next && !prev)
		ft_sa (save);
}

void	ft_put_stackb(t_save *save, t_node **headb)
{
	t_node	*tmp;
	int		aux;

	aux = 0;
	while (aux < save->length - 3)
	{
		tmp = save->head;
		ft_find_less(save, &tmp, aux);
		ft_pb (&(save->head), save, headb);
		aux++;
	}
}

void	ft_bit_compare(t_save *save, t_node **headb, int cnt)
{
	int	num;

	num = save->head->data;
	if (((num >> cnt) & 1) == 1)
		ft_ra(save);
	else
		ft_pb (&(save->head), save, headb);
}
