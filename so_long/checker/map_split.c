/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:29 by nazisken          #+#    #+#             */
/*   Updated: 2024/01/17 21:28:16 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	map_split(t_map *map)
{
	int		fd;
	char	*join;

	fd = open(map->ber, O_RDONLY);
	if (fd < 0)
		return (write(2, "File could not be read\n", 23), exit(1));
	map->line = get_next_line(fd);
	if (!map->line)
		return (write(2, "Empty Map!!\n", 12), exit(1));
	map->join = NULL;
	while (map->line)
	{
		join = ft_strjoin(map->join, map->line);
		free(map->line);
		free(map->join);
		map->join = ft_strdup(join);
		free(join);
		map->line = get_next_line(fd);
	}
	map->mav = ft_split(map->join, '\n');
	map->virtual_map = ft_split(map->join, '\n');
	if (!map->virtual_map || !map->mav)
		return (write(2, "Could not create map\n", 21), exit(1));
	map->height = wc(map->join, '\n');
	free(map->join);
}
