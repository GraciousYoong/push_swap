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

static t_node	*find_target_node(t_stack *stack_a, t_node *node)
{
	t_node	*target_node;
	int	nodes_left;

	target_node = stack_a->head;
	nodes_left = stack_a->size;
	while (nodes_left > 0)
	{
		if (node < target_node)
			return(target_node);
		target_node = target_node->next;
		nodes_left--;
	}
	return(stack_a->head);
}

static void	fill_target_node(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;
	int		nodes_left;
	
	temp = stack_b->head;
	nodes_left = stack_b->size;
	while (nodes_left > 0)
	{
		temp->target_node = find_target_node(stack_a, temp);
		temp = temp->next;
		nodes_left--;
	}
}

static void	set_cost(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;
	int		nodes_left;

	temp = stack_b->head;
	nodes_left = stack_b->size;
	while (nodes_left > 0)
	{
		if (temp->above_median && temp->target_node->above_median)
		temp->cost = temp->current_position + temp->target_node->current_position;
		else if (temp->above_median && !temp->target_node->above_median)
		temp->cost = temp->current_position + (stack_a->size - temp->target_node->current_position);
		else if (!temp->above_median && temp->target_node->above_median)
		temp->cost = (stack_b->size - temp->current_position) + temp->target_node->current_position;
		else
		temp->cost = (stack_b->size - temp->current_position) + (stack_a->size - temp->target_node->current_position);
		temp = temp->next;
		nodes_left--;
	}
}

static void	set_cheapest(t_stack *stack)
{
	t_node	*temp;
	t_node	*cheapest_node;
	int 	nodes_left;

	temp = stack->head;
	cheapest_node = stack->head;
	cheapest_node->cheapest = true;
	nodes_left = stack->size;
	while(nodes_left > 0)
	{
		if (cheapest_node->cost > temp->cost)
		{
			cheapest_node->cheapest = false;
			temp->cheapest = true;
			cheapest_node = temp;
		}
		temp = temp->next;
		nodes_left--;
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