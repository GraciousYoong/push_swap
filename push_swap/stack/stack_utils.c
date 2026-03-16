/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:53:16 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/16 20:11:48 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../inc/push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = value;
	node->current_position = 0;
	node->final_index = 0;
	node->push_cost = 0;
	node->above_median = true;
	node->target_node = NULL;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_stack *stack, t_node *new)
{
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		stack->tail->next = new;
		new->prev = stack->tail;
		stack->tail = new;
	}
	stack->size++;
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
