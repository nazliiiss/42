/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:28:42 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/18 00:07:40 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
// 	ft_lstadd_front(&nazlis, nazli);
// 	printf("%s\n",nazlis -> next  -> content);
	
// }