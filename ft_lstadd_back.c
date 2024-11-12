/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:47:18 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/12 11:40:16 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
/*
void	print_list(t_list *lst)
{
	int	*pt;
	while (lst)
	{
		pt = lst->content;
		printf("%d -> ",  *pt);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main()
{
	int	a = 1;
	int	b = 3;
	int	c = 3;
	int	d = 7;
	t_list	*node1 = ft_lstnew(&a);
	t_list	*node2 = ft_lstnew(&b);
	t_list	*node3 = ft_lstnew(&c);
	t_list	*new = ft_lstnew(&d);

	node1->next = node2;
	node2->next = node3;
	
	print_list(node1);	
	ft_lstadd_back(&node1, new);
	print_list(node1);
}*/
