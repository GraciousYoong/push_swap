/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:57:48 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 13:44:50 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			i;
	unsigned char	ch;
	char			*last;

	i = 0;
	ch = (unsigned char)c;
	last = NULL;
	while (str[i])
	{
		if (str[i] == ch)
			last = (char *)&str[i];
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (last);
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
		char *p1 = strrchr(str1, argv[2][0]);
		printf("Expected result = %s\n", p1);
		char *p2 = ft_strrchr(str2, argv[2][0]);
		printf("Recreated function result = %s\n", p2);
		if (!p1 && !p2)
			printf("TEST SUCCESSED!");
		else if (p1 && p2 && (strcmp(p1, p2) == 0))
			printf("TEST SUCCESSED!");
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