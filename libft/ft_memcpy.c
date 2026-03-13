/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:36:27 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:13:11 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	size_t n;
	char *str1 = argv[1];
	char *str2 = argv[1];
	char str3[50] = "belong";
	char str4[50] = "belong";

	n = 2;
	if (argc == 2)
	{
		printf("Dst string before memcpy(): %s\n", str3);
		printf("Dst string before ft_memcpy(): %s\n", str4);
		memcpy(str3, str1 , n);
		ft_memcpy(str4, str2, n);
		printf("Dst string after memcpy(): %s\n", str3);
		printf("Dst string after ft_memcpy(): %s\n", str4);
		if (strcmp(str3, str4) == 0)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter only 1 argument.");
	return (0);
}*/
