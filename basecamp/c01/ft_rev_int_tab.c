/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:03:31 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/09 22:18:58 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab,int size)
{
	int	c;
    int tmp;

	c = -1;
	while (++c < --size)
	{
		tmp = tab[c];
        tab[c] = tab[size];
        tab[size] = tmp;
    
	}
}
/*
** int     main(void)
** {
**    int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
**    int size = 10;
**    int i = -1;
**    
**    ft_rev_int_tab(tab, size);
**    while (++i < size)
**    {
**        printf(" %d ", tab[i]);
**    }
**    printf("\n");
**    return(0);
** }
*/