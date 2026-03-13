/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:58:02 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/25 21:57:27 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
		if (((isprint(c) > 0) && (ft_isprint(c) > 0))
			|| ((isprint(c) == 0) && (ft_isprint(c) == 0)))
		{
			printf("Test passed on ASCII %d.\n", c);
			if ((isprint(c) > 0) && (ft_isprint(c) > 0))
				printf("%c is a printable character.\n", c);
			if ((isprint(c) == 0) && (ft_isprint(c) == 0))
				printf("ASCII %d is a non-printable character.\n", c);
		}
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", isprint(c));
		printf("Rewritten function result: %d\n\n", ft_isprint(c));
		c++;
	}
	return (0);
}*/
