/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 21:35:33 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/02 22:01:29 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	ft_write(unsigned int i, char *c)
{
	ft_putnbr_fd(i, 1);
	write(1, " = ", 3);
	write(1, c, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("String taken = %s\n", argv[1]);
		printf("Function = write index and char\n");
		ft_striteri(argv[1], ft_write);
	}
	else
	{
		printf("Please enter ./a.out <string>");
		return (1);
	}
	return (0);
}*/