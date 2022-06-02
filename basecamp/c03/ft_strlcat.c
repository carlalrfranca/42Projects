/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:55:41 by cleticia          #+#    #+#             */
/*   Updated: 2021/08/10 06:07:42 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	unsigned int	index;

	index = -1;
	while (*(str + ++index) != '\0')
		;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_len;
	unsigned int s_len;
	unsigned int i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = -1;
	if (size < d_len + 1)
		return (size + s_len);
	if (size > d_len + 1)
	{
		while (src[++i] != '\0' && d_len + 1 + i < size)
			dest[d_len + i] = src[i];
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
