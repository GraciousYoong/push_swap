/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:15:02 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/25 21:57:59 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
		if (((isalpha(c) > 0) && (ft_isalpha(c) > 0))
			|| ((isalpha(c) == 0) && (ft_isalpha(c) == 0)))
		{
			printf("Test passed on ASCII %d.\n", c);
			if ((isalpha(c) > 0) && (ft_isalpha(c) > 0))
				printf("%c is an alphabetical character.\n", c);
			if ((isalpha(c) == 0) && (ft_isalpha(c) == 0))
				printf("ASCII %d is not an alphebetical character.\n", c);
		}
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", isalpha(c));
		printf("Rewritten function result: %d\n\n", ft_isalpha(c));
		c++;
	}
	return (0);
}*/
