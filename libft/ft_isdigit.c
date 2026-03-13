/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:15:38 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/25 21:57:41 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
//isdigit()interprets the value of c as a character code in ASCII.

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 0;
	while (c >= 0 && c <= 255)
	{
		if (((isdigit(c) > 0) && (ft_isdigit(c) > 0))
			|| ((isdigit(c) == 0) && (ft_isdigit(c) == 0)))
		{
			printf("Test passed on ASCII %d.\n", c);
			if ((isdigit(c) > 0) && (ft_isdigit(c) > 0))
				printf("%c is a digit.\n", c);
			if ((isdigit(c) == 0) && (ft_isdigit(c) == 0))
				printf("ASCII %d is not a digit.\n", c);
		}
		else
			printf("Test failed on ASCII %d.\n", c);
		printf("Expected result: %d\n", isdigit(c));
		printf("Rewritten function result: %d\n\n", ft_isdigit(c));
		c++;
	}
	return (0);
}*/
