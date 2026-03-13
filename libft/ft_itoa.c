/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:11:28 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 14:01:18 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n_len(long int n)
{
	long int	nb;
	int			byte;

	nb = n;
	byte = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		byte++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		byte++;
	}
	return (byte);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			byte;
	int			i;
	char		*str;

	nb = n;
	byte = count_n_len(nb);
	i = 0;
	str = (char *)malloc(byte + 1);
	if (!str)
		return (NULL);
	str[byte] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
		i = 1;
	}
	while (byte > i)
	{
		str[byte - 1] = (nb % 10) + '0';
		nb = (nb - (nb % 10)) / 10;
		byte--;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	    n;
	char	*str;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		str = ft_itoa(n);
		if (!str)
			printf("Allocation fails!");
		else
		{
			printf("The string return is %s", str);
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