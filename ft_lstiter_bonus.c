/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:20:39 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/13 05:32:34 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	f(void *content)
{
	printf("%s -> ", (char *)content);
}

int	main()
{
	t_list	*node1 = ft_lstnew("Hello");
	t_list	*node2 = ft_lstnew("My name");
	t_list	*node3 = ft_lstnew("Anass");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstiter(node1, f);
}*/
