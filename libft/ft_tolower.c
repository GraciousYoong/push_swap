/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:07:44 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/26 00:11:50 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
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
		if (tolower(c) == ft_tolower(c))
			printf("Test passed on ASCII %d.\n", c);
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", tolower(c));
		printf("Rewritten function result: %d\n\n", ft_tolower(c));
		c++;
	}
	return (0);
}*/