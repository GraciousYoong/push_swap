/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:03:30 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 13:51:51 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	size_t n;
	int ret1;
	int ret2;
	char *s1 = argv[1];
	char *s2 = argv[2];

	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("s1: %s\n", s1);
		printf("s2: %s\n", s2);
		ret1 = strncmp(s1, s2 , n);
		ret2 = ft_strncmp(s1, s2, n);
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