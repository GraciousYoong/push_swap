/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:57:39 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:13:37 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char str1[100];
	char str2[100];
	if (argc == 3)
	{
		if (strlen(argv[2]) > 1)
		{
			printf("Please enter only 1 char.");
			return (1);
		}
		strcpy(str1, argv[1]);
		strcpy(str2, argv[1]);
		printf("String = %s\n", argv[1]);
		printf("Character = %c\n", argv[2][0]);
		char *p1 = strchr(str1, argv[2][0]);
		printf("Expected result = %s\n", p1);
		char *p2 = ft_strchr(str2, argv[2][0]);
		printf("Recreated function result = %s\n", p2);
		if (!p1 && !p2)
			printf("TEST SUCCEED!");
		else if (p1 && p2 && (strcmp(p1, p2) == 0))
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
	{
		printf("Please enter ./a.out <string> <char>");
		return (1);
	}
	return (0);
}*/