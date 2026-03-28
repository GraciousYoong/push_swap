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
#include <stdio.h>

static void    print_stack(t_node *head, t_stack *stack)
{
    t_node    *current;
    int            i;

    current = head;
    i = 0;
    while (i < stack->size)
    {
        printf("Node %d: %d\n",i, current->num);
        current = current->next;
        i++;
    }
}

void	sort_big(t_stack *stack_a, t_stack *stack_b)
{
	// t_node	*smallest;

	while (stack_a->size > 3)
		pb(stack_a, stack_b, false);
	if (!stack_sorted(stack_a))
		sort_three(stack_a);
	print_stack(stack_a->head, stack_a);
	printf("============================\n");
	print_stack(stack_b->head, stack_b);
	while (stack_b->size > 0)
	{
		init_nodes(stack_a, stack_b);
		move_nodes(stack_a, stack_b);
	}
	print_stack(stack_a->head, stack_a);
	printf("============================\n");
	print_stack(stack_b->head, stack_b);

	
	// set_current_position(stack_a);
	// smallest = find_smallest(stack_a);
	// if (smallest->above_median)
	// 	while (stack_a->head != smallest)
	// 		ra(stack_a, false);
	// else
	// 	while (stack_a->head != smallest)
	// 		rra(stack_a, false);
}
