/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:02:05 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/08 11:20:40 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	main()
{
	t_list	*node1 = ft_lstnew("Node 1");
	t_list	*node2 = ft_lstnew(NULL);
	t_list	*node3 = ft_lstnew("Node 3");
	int	size;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	size = ft_lstsize(node1);
	printf("%d", size);
	free(node1);
	free(node2);
	free(node3);
}
