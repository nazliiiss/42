/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:05:59 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/16 21:09:51 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	srcl;
	size_t	dstl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	i = dstl;
	j = 0;
	if (dstsize == 0)
		return (srcl);
	if (dstsize < dstl)
		return (srcl + dstsize);
	else
	{
		while (src[j] && (dstl + j) < dstsize)
			dst[i++] = src[j++];
		if ((dstl + j) == dstsize && dstl < dstsize)
			dst[--i] = '\0';
		else
				dst[i] = '\0';
		return (srcl + dstl);
	}
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "nazkl";
// 	char s2[] = "mini";
	
// 	printf("%zu", ft_strlcat(s1, s2, 7));
// }
