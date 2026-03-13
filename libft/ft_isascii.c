/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:22:22 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/25 21:57:50 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 0;
	while (c >= 0 && c <= 255)
	{
		if (((isascii(c) > 0) && (ft_isascii(c) > 0))
			|| ((isascii(c) == 0) && (ft_isascii(c) == 0)))
		{
			printf("Test passed on ASCII %d.\n", c);
			if ((isascii(c) > 0) && (ft_isascii(c) > 0))
				printf("%c is a 7-bit US-ASCII character.\n", c);
			if ((isascii(c) == 0) && (ft_isascii(c) == 0))
				printf("%c is not a 7-bit US-ASCII character.\n", c);
		}
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", isascii(c));
		printf("Rewritten function result: %d\n\n", ft_isascii(c));
		c++;
	}
	return (0);
}*/
