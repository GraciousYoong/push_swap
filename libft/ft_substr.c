/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:40 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 18:10:33 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	chtocopied;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	chtocopied = slen - start;
	if (chtocopied > len)
		chtocopied = len;
	sub = malloc(chtocopied + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, chtocopied + 1);
	return (sub);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	unsigned int	start;
	size_t			len;
	char			*sub;

	if (argc == 4)
	{
		start = atoi(argv[2]);
		len = atoi(argv[3]);
		sub = ft_substr(argv[1], start, len);
		printf("Original string = %s\n", argv[1]);
		printf("Starting index = %s\n", argv[2]);
		printf("Length of substring = %s\n", argv[3]);
		if (!sub)
			printf("Allocation fails.\n");
		else
		{
			printf("The substring is %s.\n", sub);
			free(sub);
		}
	}
	else
		printf("Please enter %s <string> <starting index> <length>", argv[0]);
	return (0);
}*/