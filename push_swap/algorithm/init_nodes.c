/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:18:20 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 16:01:41 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

void	set_current_position(t_stack *stack)
{
	t_node	*temp;
	int		i;
	int		median_line;
	
	temp = stack->head;
	i = 1;
	median_line = stack->size / 2;
	while (i <= stack->size)
	{
		temp->current_position = i;
		if (i > median_line)
			temp->above_median = false;
		temp = temp->next;
		i++;
	}
}

void	fill_target_node(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;
	int		nodes_left;
	
	temp = stack_b->head;
	nodes_left = stack_b->size;
	while (nodes_left > 0)
	{
	}
}

void	set_cost(t_stack *stack_a, t_stack *stack_b)
{
	
}

void	set_cheapest(t_stack *stack)
{
	
}

void	init_nodes(t_stack *stack_a, t_stack *stack_b)
{
	set_current_position(stack_a);
	set_current_position(stack_b);
	fill_target_node(stack_a, stack_b);
	set_cost(stack_a, stack_b);
	set_cheapest(stack_b);
}


/*
functions to write:

Optional : sort_five

1. fill_target_nodes -> find_smallest

2. set_current_position (!!! dynamic) + bool above median

3. cal_push_cost
if both above median, push cost = sum of current position of the node and its target node
if target node !above median, push cost = 
sum of (stack->size - current position of target node) and current position of node
if node !above median, push cost = 
sum of current position of target node and (stack->size - current position of node)
if both !above median, push cost = 
sum of (stack->size - current position of target node) and (stack->size - current position of node)

cheapest
final index
*/