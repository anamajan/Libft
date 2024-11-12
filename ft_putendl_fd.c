/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 06:35:43 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/11 13:28:53 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

/*#include <fcntl.h>

int main()
{
    int fd = open ("hello.txt", O_WRONLY | O_CREAT, 0644);
    char    s[] = "1337 school in Benguerir";

    ft_putendl_fd(s, fd);
    close(fd);
    return (0);
}*/
