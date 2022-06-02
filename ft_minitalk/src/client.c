/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:44:29 by cleticia          #+#    #+#             */
/*   Updated: 2021/11/30 22:22:20 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/client.h"

void	ft_error(char **ret)
{
	free (*ret);
	ft_putstr_fd("client: unexpected error.\n", 1);
	exit(EXIT_FAILURE);
}

int	ft_send_signal(int pid, char **msg, int desl, int *x)
{
	int	aux;

	aux = *x;
	if ((*msg)[aux] & 1 << desl)
	{
		if (kill(pid, SIGUSR1) == -1)
			ft_error (msg);
	}
	else
	{
		if (kill(pid, SIGUSR2) == -1)
			ft_error (msg);
	}
	return (0);
}

static int	ft_str_to_bit(int pid, char *str)
{
	static char	*msg;
	static int	id;
	static int	x;
	static int	y;

	if (str != 0 && pid != 0)
	{
		msg = ft_strdup(str);
		x = 0;
		y = -1;
		id = pid;
	}
	while (msg[x] != '\0')
	{
		while (++y < 8)
		{
			ft_send_signal(id, &msg, (7 - y), &x);
			return (0);
		}
		y = -1;
		x++;
	}
	free(msg);
	return (1);
}

void	ft_handler(int signum)
{
	int	ret;

	ret = 0;
	if (signum == SIGUSR1)
		ret = ft_str_to_bit(0, 0);
	if (signum == SIGUSR2)
	{
		ft_putstr_fd("Server ended unexpectdly.\n", 1);
		exit(EXIT_FAILURE);
	}
	if (ret == 1)
	{
		ft_putstr_fd("client: operation successful.\n", 1);
		exit(EXIT_SUCCESS);
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	sigset_t			block_mask;

	sigemptyset(&block_mask);
	sa.sa_mask = block_mask;
	sa.sa_flags = 0;
	sa.sa_handler = &ft_handler;
	if (argc != 3 || !ft_atoi(argv[1]))
	{
		ft_putstr_fd("Error: invalid arguments.\n", 1);
		ft_putstr_fd("Correct format: ./client [pid server] [message]\n", 1);
		exit(EXIT_FAILURE);
	}
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_str_to_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}
