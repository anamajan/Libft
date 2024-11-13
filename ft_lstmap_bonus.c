/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:16:18 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/14 00:53:44 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || ! del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}

// int	main()
// {
// 	int	a = 1, b = 2, c = 3;

// 	t_list	*node1 = ft_lstnew(ft_strdup(&a));
// 	t_list	*node2 = ft_lstnew(ft_strdup(&b));
// 	t_list	*node3 = ft_lstnew(ft_strdup(&c));

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
	
// }