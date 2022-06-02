/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:33:36 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/17 20:38:33 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_pa_aux(t_save *save, t_node *tmp)
{
	save->head->prev->next = tmp;
	tmp->prev = save->head->prev;
	tmp->next = save->head;
	save->head->prev = tmp;
	save->head = tmp;
}

void	ft_pa(t_save *save, t_node **headb)
{
	t_node	*tmp;

	if ((*headb)->next != (*headb))
	{
		(*headb)->next->prev = (*headb)->prev;
		(*headb)->prev->next = (*headb)->next;
		tmp = (*headb);
		(*headb) = (*headb)->next;
	}
	else
	{
		tmp = (*headb);
		(*headb) = NULL;
	}
	if (save->head != NULL)
		ft_pa_aux(save, tmp);
	else
	{
		save->head = tmp;
		save->head->next = save->head;
		save->head->prev = save->head;
	}
	ft_putendl_fd("pa", 1);
}

void	ft_pb(t_node **nodea, t_save *save, t_node **headb)
{
	t_node	*node;
	t_node	*tmp;

	if (*headb == NULL)
	{
		node = ft_create_node((*nodea)->data);
		node->next = node;
		node->prev = node;
		*headb = node;
	}
	else
	{
		node = ft_create_node((*nodea)->data);
		node->next = *headb;
		tmp = (*headb)->prev;
		node->prev = tmp;
		tmp->next = node;
		(*headb)->prev = node;
		*headb = node;
	}
	ft_delete_node(nodea, save);
	ft_putendl_fd("pb", 1);
}
