/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:59:06 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/10 19:36:14 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	del(void *content)
{
	free(content);
}

void	printf_lstnew(t_list *lst)
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

	printf_lstnew(node1);
	ft_lstdelone(node2, del);
	printf_lstnew(node1);
	printf("Re-linking: ");
	node1->next = node3;
	printf_lstnew(node1);
}
