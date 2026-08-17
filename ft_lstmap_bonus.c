/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:02:27 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/05 12:27:57 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	list = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		ft_lstadd_back(&list, node);
		if (!node)
		{
			if (list)
				ft_lstclear(&list, del);
			if (!list)
				ft_lstdelone(node, del);
			return (0);
		}
		lst = lst->next;
	}
	return (list);
}
