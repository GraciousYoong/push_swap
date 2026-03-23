/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 01:30:33 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/24 01:30:33 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

void    move_nodes(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *cheapest_node;

    cheapest_node = find_cheapest(stack_b);
    if (cheapest_node->above_median
        && cheapest_node->target_node->above_median)
        rotate_both(stack_a, stack_b);
    else if (!(cheapest_node->above_median)
        && !(cheapest_node->target_node->above_median))
        reverse_rotate_both(stack_a, stack_b);
    finish_rotation(stack_b, cheapest_node, 'b');
    finish_rotation(stack_a, cheapest_node, 'a');
    pa(stack_a, stack_b, false);
}