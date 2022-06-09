/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleticia <cleticia@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:43:45 by cleticia          #+#    #+#             */
/*   Updated: 2022/06/08 22:48:28 by cleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>

# define FT_ERROR 1
# define FT_SUCCESS 0

typedef struct  s_principal t_principal;

typedef struct s_ph
{
	int				philo;
	int				meal;
	long long 		last_meal;
	int				left_fork;
	int				right_fork;
	pthread_t		thread;
	t_principal		*ret_principal;
}	t_ph;

struct s_principal
{
	int				nb_ph;
	int				tm_to_die;
	int				tm_to_eat;
	int				tm_to_sleep;
	int				nb_eat;
	long long		start_meal;
	int				checker;
	int				full_philos;
	t_ph			*ph;
	pthread_t		monitor;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print;
};

int			ft_exit(t_principal *input, char *str);
void		ft_putstr_fd(char *s, int fd);
int			ft_atoi(const char *str);
void		*has_died(void *param);
int			management_threads(t_principal *input);
void		eat(t_ph *philo);
void		*one_philo(t_ph *philo);
long long	get_time(void);
void		*start_routine(void *param);
int			create_philos(t_principal *input);
int			parse_args(int argc, char **argv, t_principal *input);
void		init_args_struct(t_principal *input);
void		check_args(int argc, t_principal *input);

#endif
