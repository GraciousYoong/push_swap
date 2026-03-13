/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:13:04 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/31 16:38:53 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd (nb % 10, fd);
	}
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int long	n;
	int			fd;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		fd = atoi(argv[2]);
		ft_putnbr_fd(n, fd);
	}
	else
	{
		printf("Please enter %s <number> <file descriptor>", argv[0]);
		return (1);
	}
	return (0);
}*/