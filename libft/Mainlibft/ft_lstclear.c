/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:29:14 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/18 00:07:35 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		temp = temp->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(temp);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void del(void *data)
// {
// 	free(data);
// }
// int main()
// {
// 	t_list *node1, *node2, *node3;
// 	node1 = ft_lstnew(strdup("1"));
// 	node2 = ft_lstnew(strdup("2"));
// 	node3 = ft_lstnew(strdup("3"));
// 	node1->next = node2;
// 	node2->next = node3;

// 	printf("temizlenmeden önce:\n");
// 	t_list *temp = node1;
// 	while (temp)
// 	{
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}

// 	ft_lstclear(&node1, &del);

// 	printf("temizlenince:\n");
// 	temp = node1;
// 	while (temp)
// 	{
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}

// 	return 0;
// }