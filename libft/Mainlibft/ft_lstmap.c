/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:31:40 by nazisken          #+#    #+#             */
/*   Updated: 2023/07/16 20:59:02 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*str;
	t_list	*tmp;
	void	*content;

	if (!lst || !f)
		return (NULL);
	str = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			ft_lstclear(&str, del);
		if (!content)
			return (NULL);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			free(content);
			ft_lstclear(&str, del);
			return (NULL);
		}
		ft_lstadd_back(&str, tmp);
		lst = lst->next;
	}
	return (str);
}
