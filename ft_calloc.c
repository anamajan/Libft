/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:34:50 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/13 02:56:45 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char		*str;
	size_t				i;
	size_t				total;

	if (size == 0 || count == 0)
		return (malloc(0));
	if (count > SIZE_MAX / size)
		return (NULL);
	i = 0;
	total = count * size;
	str = malloc(total);
	if (!str)
		return (NULL);
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
