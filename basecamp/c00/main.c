/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 00:20:27 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/28 00:58:26 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (void)
{
	char	lower = 96;
	char	upper = 64;

	while (++lower<= 122)
		write (1, &lower, 1);
	write (1, "\n", 1);
	while (++upper <= 90)
		write (1, &upper, 1);
	write (1, "\n", 1);
	return (0);
}

