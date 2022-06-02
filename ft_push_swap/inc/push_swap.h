/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:57:32 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/14 18:26:07 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../src/libft/libft.h"

typedef struct s_node
{
	int				data;
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_save
{
	t_node	*head;
	int		index;
	int		length;
	char	**input;
}	t_save;

typedef struct s_simplify
{
	char	**arr_simplify;
	int		mndex;
	int		init_position;
	int		mndex_cng;
	int		prev_value;
	int		i;
	int		j;
}	t_simplify;

void			ft_find_less(t_save *save, t_node **tmp, int aux);
void			ft_sort_three(t_save *save, t_node **headb);
void			ft_put_stackb(t_save *save, t_node **headb);
void			ft_bit_compare(t_save *save, t_node **headb, int cnt);
void			ft_radix_sort(t_save *save);
void			ft_small_stack(t_save *save);
void			ft_check_sort(t_save *save);
int				ft_is_sorted(t_save *save);
void			ft_verify_sorted(t_save *save);
void			ft_cng_dex(t_simplify *st, int i);
void			ft_find_mndex(t_simplify *st, t_save *save);
void			ft_simplify_struct(t_simplify *st, t_save *save);
void			ft_passing_input(t_save *save, t_simplify *st);
void			ft_simplify_numbers(t_save *save);
void			ft_pa_aux(t_save *save, t_node *tmp);
void			ft_pa(t_save *save, t_node **headb);
void			ft_pb(t_node **nodea, t_save *save, t_node **headb);
void			ft_sa(t_save *save);
void			ft_ra(t_save *save);
void			ft_rra(t_save *save);
long long int	ft_maxi_atoi(const char	*str);
void			ft_free_args(t_save *save);
void			ft_free_list(t_save *save);
long long int	ft_check_limits(t_save *save);
int				ft_check_signal(char *c);
void			ft_check_digits(t_save *save);
int				ft_decimal(long long decimal);
void			ft_check_duplicate(t_save *save);
void			ft_delete_node(t_node **nodea, t_save *save);
void			ft_put_node(t_save *save);
t_node			*ft_create_node(int value);
void			ft_create_list(t_save *save);
void			ft_validate_fornode(t_save *save);
void			ft_greater_args(int argc, char **argv, t_save *save);
void			ft_equal_args(char **argv, t_save *save);
void			ft_error_message(void);

#endif
