/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:53:16 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/30 13:40:43 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = value;
	node->current_position = 0;
	node->cost = 0;
	node->above_median = true;
	node->cheapest = false;
	node->target_node = NULL;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_stack *stack_a, t_node *new)
{
	if (!stack_a->head)
	{
		stack_a->head = new;
		stack_a->tail = new;
		new->next = new;
		new->prev = new;
	}
	else
	{
		stack_a->tail->next = new;
		stack_a->head->prev = new;
		new->prev = stack_a->tail;
		new->next = stack_a->head;
		stack_a->tail = new;
	}
	stack_a->size++;
}

bool	stack_sorted(t_stack *stack_a)
{
	t_node	*temp;

	temp = stack_a->head;
	while (temp != stack_a->tail)
	{
		if (temp->num > temp->next->num)
			return (false);
		temp = temp->next;
	}
	return (true);
}

t_node	*find_smallest(t_stack *stack_a)
{
	t_node		*smallest_node;
	t_node		*temp;
	int			smallest_num;
	int			nodes_left;

	smallest_node = stack_a->head;
	temp = stack_a->head;
	smallest_num = INT_MAX;
	nodes_left = stack_a->size;
	while (nodes_left > 0)
	{
		if (temp->num < smallest_num)
		{
			smallest_node = temp;
			smallest_num = temp->num;
		}
		temp = temp->next;
		nodes_left--;
	}
	return (smallest_node);
}

t_node	*find_cheapest(t_stack *stack_b)
{
	t_node	*current_b;
	int		nodes_left;

	current_b = stack_b->head;
	nodes_left = stack_b->size;
	while (nodes_left > 0)
	{
		if (current_b->cheapest)
			return (current_b);
		current_b = current_b->next;
		nodes_left--;
	}
	return (NULL);
}
