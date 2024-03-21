/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:28:14 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/18 00:07:46 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (*lst == NULL)
		*lst = new;
	else
	{
		str = *lst;
		while (str->next != NULL)
			str = str->next;
		str->next = new;
	}
}
// #include <stdio.h>

// int main()
// {

// 	t_list *nazli;
// 	t_list *nazlis;
	
// 	nazli = (t_list *)malloc(sizeof(t_list));
// 	nazlis = (t_list *)malloc(sizeof(t_list));
// 	nazlis -> next = nazli;
// 	nazlis -> content = "baba";
// 	nazli -> content = "mbappefeneregelsin";
// 	ft_lstadd_back(&nazlis, nazli);
// 	printf("%s\n",nazlis -> next ->content);
	
// }

