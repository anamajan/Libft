/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:16:18 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/12 11:48:46 by anaamaja         ###   ########.fr       */
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

void	*f(void *content)
{
	int	*new_value = malloc(sizeof(int));
	if (!new_value)
		return (NULL);
	*new_value = *(int *)content + 10;
	return (new_value);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	int	*ptr;
	while (lst)
	{
		ptr = lst->content;
		printf("%d -> ", *ptr);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main()
{
	int	a = 1, b = 2, c = 3;
	t_list	*node1 = ft_lstnew(&a);
	t_list	*node2 = ft_lstnew(&b);
	t_list	*node3 = ft_lstnew(&c);

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	print_list(node1);
	t_list	*new_list = ft_lstmap(node1, f, del);
	print_list(new_list);
}
