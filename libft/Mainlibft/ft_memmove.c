/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:34:05 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/15 04:25:45 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	if (src < dest)
	{
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char ze[] = "nazlisbebek";
// 	printf("%s", ft_memmove(ze + 2, ze, 9));
// 	// overloop olmamasi icin ters
// }
