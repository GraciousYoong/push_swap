/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:13:46 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/29 19:12:13 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*
Alternative:
void	ft_bzero(void *str, sizr_t n)
{
	ft_memset(str, 0 , n);
}
*/

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	size_t n;
	char *str1 = argv[1];
	char *str2 = argv[1];

	n = 3 * sizeof(char);
	if (argc == 2)
	{
		printf("Before bzero(): %s\n", str1);
		printf("Before ft_bzero(): %s\n", str2);
		bzero(str1, n);
		ft_bzero(str2, n);
		printf("After bzero(): %s\n", str1);
		printf("After ft_bzero(): %s\n", str2);
		if (strcmp(str1, str2) == 0)
			printf("TEST SUCCEED!");
		else
			printf("TEST FAILED!");
	}
	else
		printf("Please enter only 1 argument.");
	return (0);
}*/
