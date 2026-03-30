/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:18:20 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/30 13:52:51 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

void	set_current_position(t_stack *stack)
{
	t_node	*temp;
	int		i;
	int		median_line;

	if (!stack->head || stack->size == 0)
		return ;
	temp = stack->head;
	i = 0;
	median_line = stack->size / 2;
	while (i < stack->size)
	{
		temp->current_position = i;
		if (i < median_line)
			temp->above_median = true;
		else
			temp->above_median = false;
		temp = temp->next;
		i++;
	}
}

void	init_nodes(t_stack *stack_a, t_stack *stack_b)
{
	set_current_position(stack_a);
	set_current_position(stack_b);
	fill_target_node(stack_a, stack_b);
	set_cost(stack_a, stack_b);
	set_cheapest(stack_b);
}
