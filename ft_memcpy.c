/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:35:20 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/13 22:07:46 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;

	if (!to && !from)
		return (NULL);
	if (from == to)
		return (to);
	src = (unsigned char *) from;
	dest = (unsigned char *) to;
	while (n--)
		*dest++ = *src++;
	return (to);
}

// int     main()
// {
// //	char str[100] = "abcdefgh";
// //	char str2[100] = "abcdefgh";
// 	printf("%s\n",(char *)ft_memcpy(NULL, NULL, 5));
// 	//printf("%s\n", str);

// 	//ft_memcpy(str2, NULL, 5);
// 	//printf("%s\n", str2);
// }
