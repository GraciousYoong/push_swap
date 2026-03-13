/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:22:09 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/31 16:12:08 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 3)
	{
		fd = atoi(argv[2]);
		if (strlen(argv[1]) == 1)
			ft_putchar_fd(argv[1][0], fd);
		else
		{
			printf("Please enter only 1 char for c.");
			return (1);
		}
	}
	else
	{
		printf("Please enter %s <char> <file descriptor>", argv[0]);
		return (1);
	}
	return (0);
}*/