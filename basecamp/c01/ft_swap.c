/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:31:47 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/09 21:11:52 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
    int	tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
void    ft_swap(int *a,int *b);

int     main(void)
{
        int x;
        int y;
        int *a;
        int *b;
        
        x = 21;
        y = 42;
        a = &x;
        b = &y;
        printf( "Before a = %d | b = %d\n", x , y );
        ft_swap( a , b );
        printf( "After  a = %d | b = %d\n", x , y );
        return(0);
}
*/