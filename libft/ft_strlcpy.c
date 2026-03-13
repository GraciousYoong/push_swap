/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:28:49 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:13:50 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	size_t n;
	size_t ret1;
	size_t ret2;
	char *src1 = argv[1];
	char *src2 = argv[1];
	char dst1[50] = "happy";
	char dst2[50] = "happy";

	if (argc == 3)
	{
		n = atoi(argv[2]);
		printf("Dst string before strlcpy(): %s\n", dst1);
		printf("Dst string before ft_strlcpy(): %s\n", dst2);
		ret1 = strlcpy(dst1, src1 , n);
		ret2 = ft_strlcpy(dst2, src2, n);
		printf("Dst string after strlcpy(): %s\n", dst1);
		printf("Dst string after ft_strlcpy(): %s\n", dst2);
		printf("Expected return: %zu\n", ret1);
		printf("Recreate function return: %zu\n", ret2);
		if (ret1 == ret2)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter ./a.out <src string> <size of dst>");
	return (0);
}*/