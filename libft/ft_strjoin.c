/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 22:02:45 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/02 00:09:04 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	char *str;

	if (argc == 3)
	{
		printf("S1 = %s\n", argv[1]);
		printf("S2 = %s\n", argv[2]);
		str = ft_strjoin(argv[1], argv[2]);
		if (!str)
			printf("Allocation fails");
		else
		{
			printf("The concatenated string = %s", str);
			free(str);
		}
	}
	else
	{
		printf("Please enter ./a.out <s1> <s2>");
		return (1);
	}
	return (0);
}*/