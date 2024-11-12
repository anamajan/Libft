/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 06:23:49 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/11 13:29:12 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

/*int main()
{
    int fd = open ("hello.txt", O_WRONLY | O_CREAT, 0644);
    char    s[] = "hello my name is anass :)";

    if (fd == -1)
        return (1);
    ft_putstr_fd(s, fd);
    close(fd);
    return (0);
}*/
