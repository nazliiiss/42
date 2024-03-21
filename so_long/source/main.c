/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:29 by nazisken          #+#    #+#             */
/*   Updated: 2024/01/17 21:26:58 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"
#include "../minilibx/mlx.h"
#include <stdlib.h>
#include <unistd.h>

void	exitt(t_map *map)
{
	free_malloc(map->mav, 0);
	free_malloc(map->virtual_map, 0);
	if (!!map->win)
		mlx_destroy_window(map->ptr, map->win);
	exit(1);
}

void	init(t_map *map)
{
	map->c_cont = 0;
	map->e_cont = 0;
	map->p_cont = 0;
	map->ctrl_c_cont = 0;
	map->door_accessible = 0;
	map->number_of_steps = 0;
	map->player = NULL;
	map->coin = NULL;
	map->ptr = NULL;
	map->win = NULL;
	map->mav = NULL;
	map->exit = NULL;
	map->virtual_map = NULL;
}

int	main(int ac, char **av)
{
	t_map	map;

	if (ac != 2)
		return (write(1, "ac != 2\n", 8), 0);
	init(&map);
	checker(av, &map);
	so_long(&map);
}
