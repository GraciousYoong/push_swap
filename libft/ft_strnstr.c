/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:57:56 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 13:45:14 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main(int argc, char **argv)
{
	size_t	n;
	char	*str1;
	char	*str2;

	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("Haystack = %s\n", argv[1]);
		printf("Needle = %s\n", argv[2]);
		str1 = strnstr(argv[1], argv[2], n);
		str2 = ft_strnstr(argv[1], argv[2], n);
		printf("Expected result = %s\n", str1);
		printf("Recreated function result = %s\n", str2);
		if (!str1 && !str2)
			printf("TEST SUCCEED!");
		else if (str1 && str2 && strcmp(str1, str2) == 0)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter ./a.out <haystack> <needle> <n>");
	return (0);
}*/