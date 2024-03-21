/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:13:20 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/11 17:55:52 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

//#include <stdio.h>
 //int main()
//{
 //	char str[] = "Hello World";
	//ft_bzero(str, 5);
 	//printf("%c\n", str[6]);
 	//return (0);
//}