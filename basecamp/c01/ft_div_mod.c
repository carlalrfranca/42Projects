/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 18:58:19 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/09 22:07:21 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
int     main(void)
{
    int a;
    int b;
    int d;
    int m;
    int *div;
    int *mod;
    
    a = 2009;
    b = 19;
    div = &d;
    mod = &m;
    
    ft_div_mod(a, b, div, mod);
    printf("%d DIV %d = %d\n%d MOD %d = %d\n", a, b, d, a, b, m);
    return(0);    
}
*/
