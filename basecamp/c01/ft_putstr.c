/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 23:45:02 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 04:55:19 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

/*
** int     main(void)
** {
**    char str[12] = "Hello World";
**    
**    ft_putstr(str);
**    return(0);
** }
*/