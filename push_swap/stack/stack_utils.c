/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:53:16 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 15:51:04 by gyoong           ###   ########.fr       */
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
	int		nodes_left;

	temp = stack_a->head;
	nodes_left = stack_a->size;
	while (nodes_left > 0)
	{
		if (temp->num > temp->next->num)
			return (false);
		temp = temp->next;
		nodes_left--;
	}
	return (true);
}

t_node	*find_smallest(t_stack *stack_a)
{
	t_node		*smallest_node;
	t_node		*temp;
	long int	smallest_num;
	int			nodes_left;

	smallest_node = stack_a->head;
	temp = stack_a->head;
	smallest_num = LONG_MAX;
	nodes_left = stack_a->size;
	while(nodes_left > 0)
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