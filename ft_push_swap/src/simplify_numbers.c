/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:33:36 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/18 15:43:09 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_cng_dex(t_simplify *st, int i)
{
	if (i == -1)
		st->mndex++;
	else
		st->mndex = st->i;
	st->mndex_cng = 1;
}

void	ft_find_mndex(t_simplify *st, t_save *save)
{
	if (st->j == 0)
	{
		if (ft_atoi(save->input[st->mndex])
			> ft_atoi(save->input[st->i]))
			ft_cng_dex(st, st->i);
	}
	else if (st->j > 0)
	{
		if ((ft_atoi(save->input[st->i]) > st->prev_value)
			&& (ft_atoi(save->input[st->mndex])
				> ft_atoi(save->input[st->i])))
			ft_cng_dex(st, st->i);
		else if (ft_atoi(save->input[st->mndex]) < st->prev_value
			|| (st->j > 0 && ft_atoi(save->input[st->mndex]) == st->prev_value))
		{
			ft_cng_dex(st, -1);
			st->init_position++;
		}
	}
}

void	ft_simplify_struct(t_simplify *st, t_save *save)
{
	st->prev_value = 0;
	st->mndex = 0;
	st->j = 0;
	st->init_position = st->mndex;
	st->mndex_cng = 0;
	st->arr_simplify = malloc(sizeof(char *) * save->length);
}

void	ft_passing_input(t_save *save, t_simplify *st)
{
	ft_free_args(save);
	save->input = malloc(sizeof(char *) * save->length);
	st->j = 0;
	while (st->j < save->length)
	{
		save->input[st->j] = ft_strdup(st->arr_simplify[st->j]);
		free(st->arr_simplify[st->j]);
		st->j++;
	}
	free(st->arr_simplify);
}

void	ft_simplify_numbers(t_save *save)
{
	t_simplify	st;

	ft_simplify_struct(&st, save);
	while (st.j < save->length)
	{
		st.i = st.mndex + 1;
		while (st.i < save->length)
		{
			ft_find_mndex(&st, save);
			st.i++;
		}
		st.prev_value = ft_atoi(save->input[st.mndex]);
		if (st.mndex_cng == 0)
			st.init_position++;
		st.arr_simplify[st.mndex] = ft_itoa(st.j);
		st.mndex = st.init_position;
		st.mndex_cng = 0;
		st.j++;
	}
	ft_passing_input(save, &st);
	ft_create_list(save);
	ft_verify_sorted(save);
}
