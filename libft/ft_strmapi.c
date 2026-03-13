/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 20:57:15 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/02 21:33:19 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

char	add_index(unsigned int i, char c)
{
	return (i + c);
}

int	main(int argc, char **argv)
{
	char	*str;
	if (argc == 2)
	{
		printf("String taken = %s\n", argv[1]);
		printf("Function = add index to char\n");
		str = ft_strmapi(argv[1], add_index);
		if (!str)
			printf("Allocation fails\n");
		else
		{		
			printf("String returned = %s\n", str);
			free(str);
		}
	}
	else
	{
		printf("Please enter ./a.out <string>");
		return (1);
	}
	return (0);
}*/