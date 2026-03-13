/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 22:49:27 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 13:14:30 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	while (src[i] && (dstlen + i + 1) < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
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
	char dst1[50] = "happy_";
	char dst2[50] = "happy_";

	if (argc == 3)
	{
		n = atoi(argv[2]);
		printf("Dst string before strlcat(): %s\n", dst1);
		printf("Dst string before ft_strlcat(): %s\n", dst2);
		ret1 = strlcat(dst1, src1 , n);
		ret2 = ft_strlcat(dst2, src2, n);
		printf("Dst string after strlcat(): %s\n", dst1);
		printf("Dst string after ft_strlcat(): %s\n", dst2);
		printf("Expected return: %zu\n", ret1);
		printf("Recreate function return: %zu\n", ret2);
		if (strlcat(dst1, src1 , n) == ft_strlcat(dst2, src2, n))
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter ./a.out <src string> <size of dst>");
	return (0);
}*/