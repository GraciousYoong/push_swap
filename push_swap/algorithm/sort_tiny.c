/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 22:21:50 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/16 22:55:59 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../inc/push_swap.h"

// void	sort_three(t_stack *stack_a)
// {
// 	t_node	*lowest_num;
// 	int		lowest_num_position;

// 	lowest_num = stack_a->head;
// 	lowest_num_position = 1;
// 	if (lowest_num->num > lowest_num->next->num)
// 	{
// 		lowest_num = lowest_num->next;
// 		lowest_num_position = 2;
// 	}
// 	if (lowest_num->num > stack_a->tail->num)
// 	{
// 		lowest_num = stack_a->tail;
// 		lowest_num_position = 3;
// 	}
// 	if (lowest_num_position == 1)
// 	{
// 		ra(&stack_a, false);
// 		sa(&stack_a, false);
// 		rra(&stack_a, false);
// 	}
// 	else if (lowest_num_position == 2)
// 	{
// 		if (stack_a->head->num > stack_a->tail->num)
// 			ra(&stack_a, false);
// 		else
// 		{
// 			rra(&stack_a, false);
// 			sa(&stack_a, false);
// 			ra(&stack_a, false);
// 		}
// 	}
// 	else if (lowest_num_position == 3)
// 	{
// 		if (stack_a->head->num > stack_a->head->next->num)
// 		{
// 			sa(&stack_a, false);
// 			rra(&stack_a, false);
// 		}
// 		else
// 			rra(&stack_a, false);
// 	}
// }
