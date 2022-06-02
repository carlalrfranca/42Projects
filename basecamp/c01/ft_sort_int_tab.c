/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:07:33 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/09 22:22:32 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_int_tab(int *tab, int size)
{
    int swap;
    int x;
    int y;
    
    y = -1;
    while (++y <= size)
    {
        x = -1;
        while (++x <= size)
        {   
            if (tab[x] >= tab[y])     
            {
                swap = tab[x];
                tab[x] = tab[y];
                tab[y] = swap;
            }
        }
    }
}

/*
** int main (void)
** {
**	int tab [10] = {33, 44, 32, 42, 21, 75, 67, 1, 23, 9};
**	int size;
**	int i;
**    
**	size = 10;
**	i = -1;
**	ft_sort_int_tab(tab, size); 
**	while (++i < size)
**		printf("%d ", tab[i]); 
**  printf("\n");
**  return(0);
** }
*/