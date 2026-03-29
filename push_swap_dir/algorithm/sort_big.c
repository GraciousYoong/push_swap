/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:59:48 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/28 23:40:07 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

void	sort_big(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*smallest;

	push_til_three(stack_a,stack_b);
	if (!stack_sorted(stack_a))
		sort_three(stack_a);
	while (stack_b->size > 0)
	{
		init_nodes(stack_a, stack_b);
		move_nodes(stack_a, stack_b);
	}	
	set_current_position(stack_a);
	smallest = find_smallest(stack_a);
	if (smallest->above_median)
		while (stack_a->head != smallest)
			ra(stack_a, false);
	else
		while (stack_a->head != smallest)
			rra(stack_a, false);
}
