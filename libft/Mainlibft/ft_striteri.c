/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:50:30 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/16 03:16:42 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
//direk gonderio
void ft_naz(unsigned int nazli, char *str)
{
	*str = ft_tolower(*str);
}
int main()
{
	char str[] = "NazlY SeyMa ElElE";
	ft_striteri(str,ft_naz);
	printf("%s", str);
}
*/