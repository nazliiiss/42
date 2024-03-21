 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:26:20 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/13 00:26:35 by nazisken         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	wordcounter(const char *s, char delimiter)
{
	unsigned int	word;

	word = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
			word++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	j;
	unsigned int	a;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc(wordcounter(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	a = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (*s != c && *s && ++j)
				s++;
			arr[++a - 1] = (char *)ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a - 1], s - j, j + 1);
		}
	}
	return (arr);
}

// #include <stdio.h>

// int main()
// {
// 	int i = 0;
// 	char **nazli = ft_split("__selam_ben_naz",  '_');
// 	while(i < 3)
// 	{
// 		printf("%s\n", nazli[i]);
// 		i++;
// 	}	
// }
