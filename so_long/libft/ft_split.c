/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:01:29 by nazisken          #+#    #+#             */
/*   Updated: 2024/01/18 00:36:16 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	**free_malloc(char **tab, int i)
{
	while (tab[i])
		free(tab[i++]);
	return (free(tab), NULL);
}

int	wc(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static int	wlen(char const *s, char c)
{
	int	len;

	len = 0;
	if (!*s)
		return (0);
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		a;
	int		i;

	a = -1;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (wc(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (++a < wc(s, c))
	{
		if ((s[i] == '\n' && s[i + 1] == '\n') || s[i - 1] == 0)
			return (0);
		while (s[i] && s[i] == c)
			i++;
		res[a] = ft_substr(s, i, wlen(&s[i], c));
		if (!res[a])
			return (free_malloc(res, 0));
		i += wlen(&s[i], c);
	}
	return (res[a] = NULL, res);
}
