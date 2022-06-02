/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:31:55 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/12 10:54:57 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_delete_node(t_node **nodea, t_save *save)
{
	t_node	*tmp;

	(*nodea)->next->prev = (*nodea)->prev;
	(*nodea)->prev->next = (*nodea)->next;
	if ((*nodea) == save->head)
	{
		tmp = save->head;
		save->head = save->head->next;
		free(tmp);
	}
	else
	{
		free((*nodea)->prev);
		free((*nodea)->next);
		free((*nodea));
	}
}

void	ft_put_node(t_save *save)
{
	t_node	*tmp;

	save->head = NULL;
	while (save->index < save->length)
	{
		if (save->head == NULL)
		{
			tmp = ft_create_node(ft_atoi(save->input[save->index]));
			tmp->next = tmp;
			tmp->prev = tmp;
			save->head = tmp;
		}
		else
		{
			tmp->next = ft_create_node(ft_atoi(save->input[save->index]));
			tmp->next->prev = tmp;
			tmp = tmp->next;
			tmp->next = save->head;
			save->head->prev = tmp;
		}
		save->index++;
	}
}

t_node	*ft_create_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	new->data = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	ft_create_list(t_save *save)
{
	int		cnt;
	t_node	*node;

	cnt = -1;
	save->head = NULL;
	while (++cnt < save->length)
	{
		if (save->head == NULL)
		{
			node = ft_create_node(ft_atoi(save->input[cnt]));
			node->next = node;
			node->prev = node;
			save->head = node;
		}
		else
		{
			node->next = ft_create_node(ft_atoi(save->input[cnt]));
			node->next->prev = node;
			node = node->next;
			node->next = save->head;
			save->head->prev = node;
		}
	}
}
