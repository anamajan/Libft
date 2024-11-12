/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:45:05 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/11 13:30:27 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}


void    f(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = ft_toupper(*c);
}

int main()
{
    char    str[] = "hello world";

    ft_striteri(str, f);
    printf ("%s", str);
}
