/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 04:20:35 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/11 13:31:05 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char    f(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    return (c);
}

int main()
{
    char    *original = "hey my name is chatgpt";
    char    *new = ft_strmapi(original, f);

    printf("Original: %s\n", original);
    printf("New: %s", new);
    free(new);
    return (0);
}*/
