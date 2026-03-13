/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:05:17 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:13:04 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	size_t n;
	int ret1;
	int ret2;
	const void *s1;
	const void *s2;

	s1 = (const void *)argv[1];
	s2 = (const void *)argv[2];
	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("s1: %s\n", argv[1]);
		printf("s2: %s\n", argv[2]);
		ret1 = memcmp(s1, s2, n);
		ret2 = ft_memcmp(s1, s2, n);
		printf("Expected return: %d\n", ret1);
		printf("Recreate function return: %d\n", ret2);
		if (ret1 == ret2)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter ./a.out <s1> <s2> <n>");
	return (0);
}*/