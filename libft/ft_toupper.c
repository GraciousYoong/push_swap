/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:54:05 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/26 00:06:45 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 0;
	while (c >= 0 && c <= 255)
	{
		if (toupper(c) == ft_toupper(c))
			printf("Test passed on ASCII %d.\n", c);
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", toupper(c));
		printf("Rewritten function result: %d\n\n", ft_toupper(c));
		c++;
	}
	return (0);
}*/