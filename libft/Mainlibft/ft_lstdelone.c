/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:30:25 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/17 23:56:29 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del((void *)lst->content);
	free(lst);
}
#include <stdio.h>
void del(*aa)
{
	free(aa);
}
int main()
{
	t_list *node1;
	node1 = ft_lstnew("nazli");
	node1 = (char *)node1;
	printf("%s", node1->content);
	ft_lstdelone(&node1,del);
	printf("%s", node1->content);
	
}