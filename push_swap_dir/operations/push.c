/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:52:44 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/28 22:44:01 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static t_node	*remove_front(t_stack *origin)
{
	t_node	*node_pushed;

	if (!origin || !origin->head || origin->size == 0)
		return (NULL);
	node_pushed = origin->head;
	if (origin->size == 1)
	{
		origin->head = NULL;
		origin->tail = NULL;
	}
	else
	{
		origin->head = node_pushed->next;
		origin->head->prev = origin->tail;
		origin->tail->next = origin->head;
	}
	origin->size--;
	node_pushed->next = node_pushed;
	node_pushed->prev = node_pushed;
	return (node_pushed);
}

static void	add_front(t_stack *target, t_node *node_pushed)
{
	if (!target || !node_pushed)
		return ;
	if (!target->head || target->size == 0)
	{
		target->head = node_pushed;
		target->tail = node_pushed;
	}
	else
	{
		node_pushed->prev = target->tail;
		node_pushed->next = target->head;
		target->head->prev = node_pushed;
		target->tail->next = node_pushed;
		target->head = node_pushed;
	}
	target->size++;
}

static void	push(t_stack *target, t_stack *origin)
{
	t_node	*node_pushed;

	node_pushed = remove_front(origin);
	if (!node_pushed)
		return ;
	add_front(target, node_pushed);
}

void	pa(t_stack *stack_a, t_stack *stack_b, bool is_checker)
{
	push(stack_a, stack_b);
	if (!is_checker)
		ft_putendl_fd("pa", 1);
}

void	pb(t_stack *stack_a, t_stack *stack_b, bool is_checker)
{
	push(stack_b, stack_a);
	if (!is_checker)
		ft_putendl_fd("pb", 1);
}
