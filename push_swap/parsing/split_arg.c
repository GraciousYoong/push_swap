/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:59:44 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 15:28:47 by gyoong           ###   ########.fr       */
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

static char	*get_next_arg(char **splitted_array, char *str, char c)
{
	static int	str_i = 0;
	int			arg_i;
	int			arg_len;
	char		*next_arg;

	arg_i = 0;
	arg_len = str_i;
	while (str[arg_len] && str[arg_len] != ' ')
		arg_len++;
	arg_len = arg_len - str_i;
	next_arg = (char *)malloc(arg_len + 1);
	while (arg_i < arg_len)
	{
		next_arg[arg_i] = str[str_i + arg_i];
		arg_i++;
	}
	next_arg[arg_i] = '\0';
	str_i = str_i + arg_len + 1;
	return (next_arg);
}

char	**split_arg(char *str, char c)
{
	char	**splitted_arg;
	int		i;
	int		count;

	i = 0;
	if (!str)
		return (NULL);
	count = arg_count(str, c);
	if (!count)
		exit(1);
	splitted_arg = (char **)malloc((count + 2) * sizeof(char *));
	if (!splitted_arg)
		return (NULL);
	if (i == 0)
	{
		splitted_arg[i] = (char *)malloc(sizeof(char));
		splitted_arg[i][0] = '\0';
		i++;
	}
	while (count-- > 0)
		splitted_arg[i++] = get_next_arg(splitted_arg, str, c);
	splitted_arg[i] = NULL;
	return (splitted_arg);
}
