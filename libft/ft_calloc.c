/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:21:06 by gyoong            #+#    #+#             */
/*   Updated: 2025/10/30 00:00:16 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{	
	size_t	i;
	size_t	n1;
	size_t	n2;
	char	*ptr1;
	char	*ptr2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("Number of element = %zu\n", n1);
		printf("Size of each element = %zu\n", n2);
		ptr1 = (char *)calloc(n1, n2);
		ptr2 = (char *)ft_calloc(n1, n2);
		if (!ptr1 || !ptr2)
		{	
			printf("Memory allocation failed");
			if (!ptr1 && !ptr2)
				printf("TEST PASSED!");
			else if (!ptr1)
			{
				printf("TEST FAILED!\n");
				printf("Only ori function return NULL");
			}
			else
			{
				printf("TEST FAILED!\n");
				printf("Only ft function return NULL");
			}
			free(ptr1);
			free(ptr2);
			return (1);
		}
		else
		{
			printf("Expected result = ");
			i = 0;
			while (i < (n1 * n2))
			{
				printf("%d ", ptr1[i]);
				i++;
			}
			printf("\n");
			printf("ft result = ");
			i = 0;
			while (i < (n1 * n2))
			{
				printf("%d ", ptr2[i]);
				i++;
			}
			free(ptr1);
			free(ptr2);
		}
	}
	else
		printf("Please enter %s <nmemb> <size>", argv[0]);
	return (0);
}*/