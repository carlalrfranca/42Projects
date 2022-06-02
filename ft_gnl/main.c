/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:40:37 by cleticia          #+#    #+#             */
/*   Updated: 2021/06/17 19:57:08 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#define BUFFER_SIZE 50

int main()
{
    char *linha;
    int fd;
    int ret;
    
    fd = open("/home/usuario/get-next-line/texto.txt", O_RDONLY);
    while (ret == 1)
    {
        ret = get_next_line(fd, &linha);
        printf("%s", linha);
        free(linha);   
    }
    return (0);
}
