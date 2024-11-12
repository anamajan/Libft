/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:35:43 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/12 16:59:17 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (!dst)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = 0;
	j = dst_len;
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (src_len + dst_len);
}

int	main()
{
	char	dest[20] = "hello ";
	char	src[] = "world!";
	
	char	dest2[12] = "hello ";
	char	src2[] = "world!";

	printf("%zu | %s\n", ft_strlcat(dest, src, 5), dest);

	printf("%zu | %s\n", strlcat(dest2, src2, 5), dest);
}
