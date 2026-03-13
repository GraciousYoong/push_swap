/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:06:29 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/25 21:58:09 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
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
		if (((isalnum(c) > 0) && (ft_isalnum(c) > 0))
			|| ((isalnum(c) == 0) && (ft_isalnum(c) == 0)))
		{
			printf("Test passed on ASCII %d.\n", c);
			if ((isalnum(c) > 0) && (ft_isalnum(c) > 0))
				printf("%c is an alphanumeric character.\n", c);
			if ((isalnum(c) == 0) && (ft_isalnum(c) == 0))
				printf("ASCII %d is not an alphanumeric character.\n", c);
		}
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", isalnum(c));
		printf("Rewritten function result: %d\n\n", ft_isalnum(c));
		c++;
	}
	return (0);
}*/
