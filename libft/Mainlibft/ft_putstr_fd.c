/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:15:44 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/15 04:26:15 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// #include <fcntl.h>

// //int main()
// //{
// //	char aa[] = "nazli";
// //	int fd = open("naz.txt", O_RDWR );
// //	 ft_putstr_fd(aa, fd);
// //}
