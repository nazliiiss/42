/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:27:13 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/16 02:19:21 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dizi;
	long	nbr;

	nbr = n;
	len = numlen(nbr);
	dizi = malloc(sizeof(char) * len + 1);
	if (!dizi)
		return (0);
	dizi[len--] = '\0';
	if (n < 0)
	{
		dizi[0] = '-';
		nbr = -nbr;
	}
	if (n == 0)
		dizi[0] = '0';
	while (nbr > 0)
	{
		dizi[len--] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (dizi);
}

// #include <stdio.h>

// int main()
// {
// 	int a;

// 	a = -333;
// 	printf("%s",ft_itoa(a));
// }
