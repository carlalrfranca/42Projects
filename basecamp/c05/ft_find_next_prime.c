/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 09:25:01 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:15:50 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int n;

	n = nb;
	if (nb <= 1)
		return (2);
	while (ft_prime(n) == 0)
		n++;
	return (n);
}
