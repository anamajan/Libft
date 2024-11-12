/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:23:18 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/12 17:12:47 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;
	
	ptr = *lst;
	while (ptr != NULL)
	{
		temp = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = temp;
	}
	*lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}

void	print_node(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main()
{
	t_list	*node1 = ft_lstnew(ft_strdup("Welcome"));
	t_list	*node2 = ft_lstnew(ft_strdup("To"));
	t_list	*node3 = ft_lstnew(ft_strdup("1337"));

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	print_node(node1);
	ft_lstclear(&node1, del);
	print_node(node1);
}*/
