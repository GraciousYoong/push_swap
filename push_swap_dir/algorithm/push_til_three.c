/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_til_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 15:04:29 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/30 13:48:50 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static void	assign_sorted_index(t_stack *stack_a)
{
	t_node	*current;
	t_node	*other;

	current = stack_a->head;
	other = stack_a->head->next;
	while (other != current)
	{
		if (current->num > other->num)
			current->sorted_index++;
		other = other->next;
	}
}

void	push_til_three(t_stack *stack_a, t_stack *stack_b)
{
	int	size;
	int	median_line;

	size = stack_a->size;
	median_line = size / 2;
	assign_sorted_index(stack_a);
	while (stack_a->size > median_line)
	{
		if (stack_a->head->sorted_index < median_line)
			pb(stack_a, stack_b, false);
		else
			ra(stack_a, false);
	}
	while (stack_a->size > 3)
		pb(stack_a, stack_b, false);
}
