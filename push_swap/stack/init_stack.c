/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:52:16 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 15:28:52 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static int	ft_safe_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	init_stack_a(t_stack *stack_a, char **argv, bool is_argc_2)
{
	int			i;
	long int	num;
	t_node		*node;

	i = 0;
	while (argv[i])
	{
		if (is_non_numeric(argv[i]))
			free_and_error(stack_a, argv, is_argc_2);
		num = ft_safe_atoi(argv[i]);
		if (num > INT_MAX)
			free_and_error(stack_a, argv, is_argc_2);
		if (is_duplicate(num, stack_a))
			free_and_error(stack_a, argv, is_argc_2);
		node = new_node(num);
		if (!node)
			return ;
		add_back(stack_a, node);
		i++;
	}
	if (is_argc_2)
		free_splitted_arg(argv);
}

void	init_stack(t_stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
}
