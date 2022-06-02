/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 09:25:01 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/26 05:09:48 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int r;

	r = 1;
	if (power < 0)
		return (0);
	while(--power >= 0)
		r *= nb;
	return(r);
}
