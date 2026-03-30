/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 01:30:33 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/30 13:41:32 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static void	rotate_both(t_stack *stack_a,
	t_stack *stack_b,
	t_node *cheapest_node)
{
	while (stack_a->head != cheapest_node->target_node
		&& stack_b->head != cheapest_node)
		rr(stack_a, stack_b, false);
	set_current_position(stack_a);
	set_current_position(stack_b);
}

static void	reverse_rotate_both(t_stack *stack_a,
	t_stack *stack_b,
	t_node *cheapest_node)
{
	while (stack_a->head != cheapest_node->target_node
		&& stack_b->head != cheapest_node)
		rrr(stack_a, stack_b, false);
	set_current_position(stack_a);
	set_current_position(stack_b);
}

void	finish_rotation(t_stack *stack, t_node *top_node, char stack_name)
{
	bool	above_median;

	if (top_node->above_median)
		above_median = true;
	else
		above_median = false;
	while (stack->head != top_node)
	{
		if (above_median)
		{
			if (stack_name == 'a')
				ra(stack, false);
			else
				rb(stack, false);
		}
		else
		{
			if (stack_name == 'a')
				rra(stack, false);
			else
				rrb(stack, false);
		}
	}
}

void	move_nodes(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*cheapest_node;

	cheapest_node = find_cheapest(stack_b);
	if (!cheapest_node)
		return ;
	if (cheapest_node->above_median
		&& cheapest_node->target_node->above_median)
		rotate_both(stack_a, stack_b, cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
		reverse_rotate_both(stack_a, stack_b, cheapest_node);
	finish_rotation(stack_a, cheapest_node->target_node, 'a');
	finish_rotation(stack_b, cheapest_node, 'b');
	pa(stack_a, stack_b, false);
}
