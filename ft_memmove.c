/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:44:44 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/13 01:59:52 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	from = (unsigned char *) src;
	to = (unsigned char *) dst;
	if (to > from)
	{
		while (len-- > 0)
			to[len] = from[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}

/*int	main()
{
	char	data[] = "abcdefgh";
	char	tt[] = "abcdefgh";

	ft_memmove(data + 2, data, 6);
	printf("Mine: %s\n", data);
	memmove(tt + 2, tt, 6);
	printf("Orig: %s", tt);
}*/
