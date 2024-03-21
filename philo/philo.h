/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:29:11 by nazisken          #+#    #+#             */
/*   Updated: 2024/03/04 15:57:23 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>

# define M_ERROR 	"ERROR! AlLocation error.\n"
# define CHECK_ARGS 	"Check ur ARGS.\n"
# define MUTEX_INIT_ERROR 	"ERROR! Mutex init error.\n"
# define CREATING_TABLE_ERROR "ERROR! Table create error.\n"
# define START_SIMULATION_ERROR "ERROR! Start simulation error.\n"

# define ERROR 1
# define SUCCESS 0

typedef struct s_philo
{
	pthread_t		thread;
	int				philo_id;
	int				eat_count;
	int				left_fork;
	int				right_fork;
	u_int64_t		last_eat;
	struct s_table	*table;
}	t_philo;

typedef struct s_table
{
	t_philo			*philo;
	u_int64_t		time_of_die;
	int				num_of_philo;
	int				time_of_eat;
	int				time_of_sleep;
	int				eat_limit;
	int				check_die;
	u_int64_t		die_time;
	int				die_id;
	int				check_eat;
	int				check_eat_count;
	int				num;
	u_int64_t		table_start_time;
	pthread_mutex_t	m_with_eat;
	pthread_mutex_t	*m_fork;
	pthread_mutex_t	m_print;
	pthread_mutex_t	m_die;
	pthread_mutex_t	m_time;
	pthread_mutex_t	m_eat;
}	t_table;

int			argument_control(int ac, char **av);
int			creating_table(t_table *table, char **av);
int			destroy_mutex(t_table *table, int num);
void		init_philo(t_table *table);
int			mutex_init(t_table *table);
void		print_at_all(t_table *philo, char *str, int number);
int			start_simulation(t_table *table, int i);
int			waiting_threads(t_table *table, int i);
void		*philo_life(void *arg);
u_int64_t	get_time(void);
void		baby_sleep(u_int64_t time);
void		ft_putstr_fd(char *s, int fd);
int			ft_no_malloc(t_table *table);
int			check_dead_function(t_table *table, t_philo *philo);
int			sushi(t_table *table, t_philo *philo);
int			yummy(t_table *table, t_philo *philo);
int			ft_strlen(char *s);

#endif