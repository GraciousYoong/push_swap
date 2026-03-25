/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:59:44 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/25 19:07:27 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static int	arg_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*get_next_arg(char *str, char c, int *str_i)
{
	int			start;
	int			arg_len;
	char		*next_arg;

	while (str[*str_i] == c)
		(*str_i)++;
	start = *str_i;
	while (str[*str_i] && str[*str_i] != c)
		(*str_i)++;
	arg_len = *str_i - start;
	next_arg = (char *)malloc(arg_len + 1);
	if (!next_arg)
		return (NULL);
	ft_strlcpy(next_arg, &str[start], arg_len + 1);
	return (next_arg);
}

char	**split_arg(char *str, char c)
{
	char	**splitted_arg;
	int		i;
	int		count;
	int		str_i;

	if (!str)
		return (NULL);
	i = 0;
	str_i = 0;
	count = arg_count(str, c);
	if (!count)
		exit(1);
	splitted_arg = (char **)malloc((count + 1) * sizeof(char *));
	if (!splitted_arg)
		return (NULL);
	while (i < count)
		splitted_arg[i++] = get_next_arg(str, c, &str_i);
	splitted_arg[i] = NULL;
	return (splitted_arg);
}
