/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:53:38 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:13:20 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str1[100];
	char str2[100];
	size_t	n;
	
	if (argc == 3)
	{
		n = atoi(argv[2]);
		strcpy(str1, argv[1]);
    	strcpy(str2, argv[1]);
    	printf("Original string :%s\n", argv[1]);
    	memmove(str1 + 1, str1, n);
    	printf("Expected result : %s\n", str1);
    	ft_memmove(str2 + 1, str2, n);
    	printf("Recreated function result : %s\n", str2);
		if (strcmp(str1, str2) == 0)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
    else
		printf("Please enter ./a.out <src string> <n>");
    return (0);
}*/