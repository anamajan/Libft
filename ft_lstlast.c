/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:03:35 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/08 16:17:52 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	main()
{
	t_list	*node1 = ft_lstnew("Node1");
	t_list	*node2 = ft_lstnew("Node2");
	t_list	*node3 = ft_lstnew("Node3");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;	
	t_list	*last = ft_lstlast(node1);
	printf("Last node content: %s\n", (char *)last->content);
	printf("Last node next: %s", (char *)last->next);
}
