/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:49:46 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 18:21:55 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	return (trimmed);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*trimmed;
	if (argc == 3)
	{
		printf("String = %s\n", argv[1]);
		printf("Character set = %s\n", argv[2]);
		trimmed = ft_strtrim(argv[1], argv[2]);
		if (!trimmed)
			printf("Allocation fails!\n");
		else
		{
			printf("Trimmed string = %s\n", trimmed);
			free(trimmed);
		}
	}
	else
	{
		printf("Please enter ./a.out <string> <char set>");
		return (1);
	}
	return (0);
}*/