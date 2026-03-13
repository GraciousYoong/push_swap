/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:57:37 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:12:58 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	ptr = (const unsigned char *)str;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char str[100];
	size_t	n;

	if (argc == 4)
	{
		if (strlen(argv[2]) > 1)
		{
			printf("Please enter only 1 char.");
			return (1);
		}
		n = atoi(argv[3]);
		strcpy(str, argv[1]);
		printf("String = %s\n", argv[1]);
		printf("Character = %c\n", argv[2][0]);
		printf("Number of bytes = %zu\n", n);
		void *p1 = memchr(str, argv[2][0], n);
		printf("Expected result = %p\n", p1);
		void *p2 = ft_memchr(str, argv[2][0], n);
		printf("Recreated function result = %p\n", p2);
		if (!p1 && !p2)
			printf("TEST SUCCEED!");
		else if (p1 == p2)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
	{
		printf("Please enter ./a.out <string> <char> <n bytes");
		return (1);
	}
	return (0);
}*/