/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:31:55 by cleticia          #+#    #+#             */
/*   Updated: 2022/01/13 02:09:52 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_validate_fornode(t_save *save)
{
	ft_check_limits(save);
	ft_check_digits(save);
	ft_check_duplicate(save);
	ft_simplify_numbers(save);
}

void	ft_greater_args(int argc, char **argv, t_save *save)
{
	save->length = argc - 1;
	save->input = malloc(sizeof(char *) * save->length);
	while (save->index < save->length)
	{
		save->input[save->index] = ft_strdup(argv[save->index + 1]);
			save->index++;
	}
	save->index = 0;
	ft_validate_fornode(save);
}

void	ft_equal_args(char **argv, t_save *save)
{
	save->input = ft_split(argv[1], ' ');
	while (save->input[save->length])
		save->length++;
	ft_validate_fornode(save);
}

void	ft_error_message(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_save	save;

	save.head = NULL;
	if (argc < 2)
		exit(0);
	save.length = 0;
	save.input = argv;
	save.index = 0;
	if (argc == 2)
		ft_equal_args(argv, &save);
	if (argc > 2)
		ft_greater_args(argc, argv, &save);
	return (0);
}
