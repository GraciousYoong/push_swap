/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 01:28:12 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/30 13:52:56 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

/*
This function aims to find the target node in stack a
that contain smallest num which is grater than stack b node.
*/
t_node	*find_target_node(t_stack *stack_a, t_node *current_b)
{
	t_node	*target_node;
	t_node	*current_a;
	int		smallest_greater;
	int		nodes_left;

	target_node = NULL;
	current_a = stack_a->head;
	smallest_greater = INT_MAX;
	nodes_left = stack_a->size;
	while (nodes_left > 0)
	{
		if (current_b->num < current_a->num
			&& current_a->num < smallest_greater)
		{
			target_node = current_a;
			smallest_greater = current_a->num;
		}
		current_a = current_a->next;
		nodes_left--;
	}
	return (target_node);
}

void	fill_target_node(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*target_node;
	t_node	*current_b;
	int		nodes_left;

	current_b = stack_b->head;
	nodes_left = stack_b->size;
	while (nodes_left > 0)
	{
		target_node = find_target_node(stack_a, current_b);
		if (target_node == NULL)
			current_b->target_node = find_smallest(stack_a);
		else
			current_b->target_node = target_node;
		current_b = current_b->next;
		nodes_left--;
	}
}

static int	ft_max_cost(int cost_a, int cost_b)
{
	if (cost_a > cost_b)
		return (cost_a);
	else
		return (cost_b);
}

void	set_cost(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*current_b;
	int		cost_a;
	int		cost_b;
	int		nodes_left;

	current_b = stack_b->head;
	nodes_left = stack_b->size;
	while (nodes_left > 0)
	{
		if (current_b->above_median)
			cost_b = current_b->current_position;
		else
			cost_b = stack_b->size - current_b->current_position;
		if (current_b->target_node->above_median)
			cost_a = current_b->target_node->current_position;
		else
			cost_a = stack_a->size - current_b->target_node->current_position;
		if (current_b->above_median == current_b->target_node->above_median)
			current_b->cost = ft_max_cost(cost_b, cost_a);
		else
			current_b->cost = cost_b + cost_a;
		current_b = current_b->next;
		nodes_left--;
	}
}

void	set_cheapest(t_stack *stack_b)
{
	t_node	*cheapest_node;
	t_node	*current_b;
	int		cheapest_cost;
	int		nodes_left;

	if (!stack_b->head || stack_b->size == 0)
		return ;
	current_b = stack_b->head;
	nodes_left = stack_b->size;
	current_b = stack_b->head;
	cheapest_cost = INT_MAX;
	nodes_left = stack_b->size;
	while (nodes_left--)
	{
		if (current_b->cost < cheapest_cost)
		{
			cheapest_node = current_b;
			cheapest_cost = current_b->cost;
		}
		current_b = current_b->next;
	}
	cheapest_node->cheapest = true;
}
