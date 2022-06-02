/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 23:58:30 by cleticia          #+#    #+#             */
/*   Updated: 2021/07/24 11:44:31 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_address(void *addr)
{
	int		h[16];
	long	l;
	int		i;
	char	*hexa;

	hexa = "0123456789abcdef";
	l = (long)addr;
	i = 15;
	while (l > 0)
	{
		h[i] = l % 16;
		l = l / 16;
		i--;
	}
	while (i > 0)
	{
		h[i] = 0;
		i--;
	}
	h[i] = 0;
	while (i < 16)
	{
		ft_putchar(hexa[h[i]]);
		i++;
	}
}

void	ft_content(void *addr, int size)
{
	int				i;
	unsigned char	*temp;
	unsigned char	*hexa;
	unsigned char	c;

	hexa = (unsigned char *)"0123456789abcdef";
	i = 0;
	temp = (unsigned char *)addr;
	while (i < size)
	{
		c = temp[i];
		ft_putchar(hexa[c / 16]);
		ft_putchar(hexa[c % 16]);
		if ((i % 2) == 1)
			ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		ft_putchar(' ');
		i++;
	}	
}

void	ft_text(void *addr, size_t size)
{
	unsigned int	i;
	unsigned char	*temp;

	temp = (unsigned char *)addr;
	i = -1;
	while (++i < size)
	{
		if ((temp[i] >= 0 && temp[i] < 32)
		|| temp[i] == 127)
			ft_putchar('.');
		else
		{
			ft_putchar(temp[i]);
			i++;
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	print;
	unsigned int	off;

	off = 0;
	while (size > 0)
	{
		if (size < 16)
		{
			print = size;
			size = 0;
		}
		else
		{
			print = 16;
			size -= 16;
		}
		ft_address(addr + off);
		ft_putchar(':');
		ft_putchar(' ');
		ft_content(addr + off, print);
		ft_text(addr + off, print);
		ft_putchar('\n');
		off += 16;
	}
	return (addr);
}

/*
int main()
{
	char *str = "Library";
	ft_print_memory(str, fstrlen(str));
	ft_print_memory(str, 0);
}
*/