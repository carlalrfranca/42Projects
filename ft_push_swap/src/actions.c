/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:31:55 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/12 10:51:43 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sa(t_save *save)
{
	int	aux;

	if (save->head->next != save->head)
	{
		aux = save->head->data;
		save->head->data = save->head->next->data;
		save->head->next->data = aux;
	}
	ft_putendl_fd("sa", 1);
}

void	ft_ra(t_save *save)
{
	save->head = save->head->next;
	ft_putendl_fd("ra", 1);
}

void	ft_rra(t_save *save)
{
	save->head = save->head->prev;
	ft_putendl_fd("rra", 1);
}
