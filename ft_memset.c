/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:35:23 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/13 01:59:59 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) ptr;
	while (n > 0)
	{
		*str = (unsigned char ) x;
		str++;
		n--;
	}
	return (ptr);
}


/*int	main()
{
	int	i = 0;
	char	*ptr;

	ptr = (char *)(&i);
	ft_memset(ptr, 57, 1);
	ft_memset(ptr + 1, 5, 1);
	printf("%d", i);
}*/

/*int	main()
{
	int	str[] = {5, 12, 40};
	char	*ptr;

	ptr = (char *)(&str);
	ft_memset(ptr , 57, 1);
	ft_memset(ptr + 1, 5, 1);
	for (int i = 0; i < 3; i++)
		printf ("%d, ", str[i]);
}*/

/*int	main()
{
	char	ptr[20];

	ft_memset(ptr , '1', 1);
	ft_memset(ptr + 1, '3', 1);
	ft_memset(ptr + 2, '3', 1);
	ft_memset(ptr + 3, '7', 1);
	ft_memset(ptr + 5, '\0', 1);
	printf("%s", ptr);
}*/
