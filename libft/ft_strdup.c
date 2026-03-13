/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:31:03 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/01 22:35:02 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		i;
	size_t		strlen;
	char		*dup;

	i = 0;
	strlen = ft_strlen(str);
	dup = (char *)malloc(strlen + 1);
	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{	
	char	*dup1;
	char	*dup2;

	if (argc == 2)
	{
		printf("String taken = %s\n", argv[1]);
		dup1 = strdup((const char *)argv[1]);
		dup2 = ft_strdup((const char *)argv[1]);
		printf("Expected result = %s\n", dup1);
		printf("Recreated function result = %s\n", dup2);
		if (strcmp(dup1, dup2) == 0)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
		free(dup1);
		free(dup2);
	}
	else
		printf("Please enter ./a.out <string>");
	return (0);
}*/