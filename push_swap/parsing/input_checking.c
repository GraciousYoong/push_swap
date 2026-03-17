/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:17:22 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 15:28:42 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

/*
Check whether the input is non-numeric.
Acceptable input examples: 20 +40 -7.
*/
bool	is_non_numeric(char *num_str)
{
	if (*num_str != '+' && *num_str != '-'
		&& !(*num_str >= '0' && *num_str <= '9'))
		return (true);
	if ((*num_str == '+' || *num_str == '-')
		&& !(*num_str >= '0' && *num_str <= '9'))
		return (true);
	while (*num_str)
	{
		if (!(*num_str >= '0' && *num_str <= '9'))
			return (true);
		num_str++;
	}
	return (false);
}

/*
check whether the input(converted to num)
is duplicate with numbers stored in stack_a.
*/
bool	is_duplicate(int num, t_stack *stack_a)
{
	t_node	*temp;

	if (!stack_a || !stack_a->head)
		return (false);
	temp = stack_a->head;
	while (temp != stack_a->tail)
	{
		if (num == temp->num)
			return (true);
		temp = temp->next;
	}
	return (false);
}
