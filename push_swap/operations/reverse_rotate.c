/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:06:15 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/16 17:54:39 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../inc/push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return ;
	stack->head = stack->head->prev;
	stack->tail = stack->tail->prev;
}

void	rra(t_stack *stack_a, bool is_checker)
{
	reverse_rotate(stack_a);
	if (!is_checker)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stack *stack_b, bool is_checker)
{
	reverse_rotate(stack_b);
	if (!is_checker)
		ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b, bool is_checker)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	if (!is_checker)
		ft_putendl_fd("rrr", 1);
}
