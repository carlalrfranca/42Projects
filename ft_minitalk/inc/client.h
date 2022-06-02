/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:47:42 by cleticia          #+#    #+#             */
/*   Updated: 2021/11/30 22:21:56 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>
# include "../src/libft/libft.h"

static int	ft_str_to_bit(int pid, char *str);
int			ft_send_signal(int id, char **msg, int desl, int *x);
void		ft_handler(int signum);
void		ft_error(char **ret);
void		ft_putstr_fd(char *s, int fd);

#endif
