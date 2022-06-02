/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 22:35:28 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/09 22:13:39 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a,int *b)
{
    int div;
    int mod;
    
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

/*
int     main(void)
{
    int x;
    int y;
    int *a;
    int *b;
    
    a = &x;
    b = &y;
    x = 2009;
    y = 19;
    ft_ultimate_div_mod(a , b);
    printf("Você pode printar pelos ponteiros:\n");
    printf("DIV %d\nMOD %d\n",*a, *b);
    printf("Você pode printar pelas variáveis:\n");
    printf("DIV %d\nMOD %d\n",x, y);
    return(0);
}
*/
