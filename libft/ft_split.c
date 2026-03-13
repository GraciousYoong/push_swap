/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:59:44 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/03 19:13:15 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[0] && s[0] != c)
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			if (s[i - 1] == c)
				count++;
			i++;
		}
	}
	return (count);
}

static size_t	str_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_split(char **split, size_t str_alloc)
{
	size_t	i;

	i = 0;
	while (i < str_alloc)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = str_len(s + i, c);
			split[j] = ft_substr(s, i, len);
			if (!split[j])
			{
				free_split(split, j);
				return (NULL);
			}
			i = i + len;
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	count;

	if (!s)
		return (NULL);
	count = str_count(s, c);
	splitted = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!splitted)
		return (NULL);
	return (fill_split(splitted, s, c));
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	**splitted;
	size_t	i;

	if (argc == 3)
	{
		if (strlen(argv[2]) > 1)
		{
			printf("Please enter only 1 char.");
			return (1);
		}
		printf("String taken = %s\n", argv[1]);
		printf("Delimiter = %c\n", argv[2][0]);
		splitted = ft_split(argv[1], argv[2][0]);
		i = 0;
		while(splitted[i])
		{
			printf("String %lu is ", i + 1);
			printf("%s.\n", splitted[i]);
			i++;
		}

	}
	else
	{
		printf("Please enter ./a.out <string> <delimiter>");
		return (1);
	}
	return (0);
}*/