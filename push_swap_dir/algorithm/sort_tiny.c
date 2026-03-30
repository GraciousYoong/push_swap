/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 22:21:50 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/30 14:38:56 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static int	sort_3_max_pos(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;

	a = stack_a->head->num;
	b = stack_a->head->next->num;
	c = stack_a->tail->num;
	if (a > b && a > c)
		return (1);
	if (b > a && b > c)
		return (2);
	return (3);
}

void	sort_three(t_stack *stack_a)
{
	int		max_position;

	max_position = sort_3_max_pos(stack_a);
	if (max_position == 3)
		sa(stack_a, false);
	else if (max_position == 2)
	{
		if (stack_a->head->num > stack_a->tail->num)
			rra(stack_a, false);
		else
		{
			rra(stack_a, false);
			sa(stack_a, false);
		}
	}
	else
	{
		if (stack_a->tail->num > stack_a->head->next->num)
			ra(stack_a, false);
		else
		{
			ra(stack_a, false);
			sa(stack_a, false);
		}
	}
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 3)
	{
		init_nodes(stack_a, stack_b);
		finish_rotation(stack_a, find_smallest(stack_a), 'a');
		pb(stack_a, stack_b, false);
	}
	if (!stack_sorted(stack_a))
		sort_three(stack_a);
	while (stack_b->size > 0)
		pa(stack_a, stack_b, false);
}
