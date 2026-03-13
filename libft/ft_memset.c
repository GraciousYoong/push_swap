/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:34:46 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:13:26 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	c;
	size_t n;
	char *str1 = argv[1];
	char *str2 = argv[1];

	c = 'a';
	n = 3 * sizeof(char);
	if (argc == 2)
	{
		printf("Before memset(): %s\n", str1);
		printf("Before ft_memset(): %s\n", str2);
		memset(str1, c, n);
		ft_memset(str2, c, n);
		printf("After memset(): %s\n", str1);
		printf("After ft_memset(): %s\n", str2);
		if (strcmp(str1, str2) == 0)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter only 1 argument.");
	return (0);
}*/
