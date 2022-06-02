/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 09:25:01 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:16:42 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int r;
	int i;

	i = -1;
	r = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (++i <= nb)
		r *= i;
	return (r);
}
