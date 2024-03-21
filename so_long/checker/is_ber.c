/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ber.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:29 by nazisken          #+#    #+#             */
/*   Updated: 2024/01/17 19:30:22 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include "../libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

void	is_ber(char **av, t_map *map)
{
	map->ber = av[1];
	if (ft_strncmp(av[1] + ft_strlen(av[1]) - 4, ".ber", 5))
		return (write(2, "Not ber file!!\n", 15), exit(1));
}
