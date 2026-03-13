/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:55:36 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/31 16:11:17 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 3)
	{
		fd = atoi(argv[2]);
		ft_putstr_fd(argv[1], fd);
	}
	else
	{
		printf("Please enter %s <string> <file descriptor>", argv[0]);
		return (1);
	}
	return (0);
}*/