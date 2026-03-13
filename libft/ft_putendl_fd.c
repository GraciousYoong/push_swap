/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:04:17 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/31 16:12:03 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 3)
	{
		fd = atoi(argv[2]);
		ft_putendl_fd(argv[1], fd);
	}
	else
	{
		printf("Please enter %s <string> <file descriptor>", argv[0]);
		return (1);
	}
	return (0);
}*/