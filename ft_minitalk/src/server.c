/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:44:29 by cleticia          #+#    #+#             */
/*   Updated: 2021/11/30 22:22:31 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/server.h"

void	ft_handler(int signum, siginfo_t *siginfo, void *context)
{
	static char	asc;
	static int	pow;
	static int	pid;

	(void)context;
	if (!pid)
	{
		pid = siginfo->si_pid;
		asc = 0;
		pow = 0;
	}
	if (signum == SIGUSR1)
		asc |= 1 << (7 - pow);
	pow++;
	if (pow == 8)
	{
		ft_putchar_fd(asc, 1);
		asc = 0;
		pow = 0;
	}
	if (kill(siginfo->si_pid, SIGUSR1) == -1)
	{
		(kill(siginfo->si_pid, SIGUSR2));
		exit(EXIT_FAILURE);
	}
}

int	main(void)
{
	struct sigaction	action;
	sigset_t			block_mask;

	sigemptyset(&block_mask);
	sigaddset(&block_mask, SIGINT);
	sigaddset(&block_mask, SIGQUIT);
	ft_putstr_fd ("Server PID: ", 1);
	ft_putnbr_fd (getpid(), 1);
	ft_putstr_fd ("\n", 1);
	action.sa_flags = SA_SIGINFO;
	action.sa_mask = block_mask;
	action.sa_sigaction = &ft_handler;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	while (1)
		pause();
}
