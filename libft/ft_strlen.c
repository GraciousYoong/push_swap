/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:32:53 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/27 17:10:41 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("String taken is %s.\n", argv[1]);
		if (strlen(argv[1]) == ft_strlen(argv[1]))
			printf("Test passed\n");
		else
			printf("Test failed\n");
		printf("Expected result: %lu\n", strlen(argv[1]));
		printf("Rewritten function result: %zu\n", ft_strlen(argv[1]));
	}
	else
		printf("Please enter only 1 argument.");
	return (0);
}*/
