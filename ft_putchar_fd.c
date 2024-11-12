/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaamaja <anaamaja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 03:15:34 by anaamaja          #+#    #+#             */
/*   Updated: 2024/11/12 17:12:29 by anaamaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int main()
{
    int fd = open("hello.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

    if (fd == -1)
        return (1);

    ft_putchar_fd('A', 3);
    close(fd);
    return (0);    
}*/
