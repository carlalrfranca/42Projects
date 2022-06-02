/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 00:38:45 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/24 11:55:58 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int x;

    x = -1;
    while (++x < n && src[x] != '\0')
        dest[x] = src[x];
    while (++x < n)
        dest[x]  = '\0';
    return (dest);
}

/*
int main (void)
{
    char src[12] = "Hello_World";
    char dest[12];
    unsigned int n = 12;
  
    ft_strncpy(dest, src, n);
    printf("src : %s \ndest: %s\n", src, dest);
    return(0);    
}
*/
