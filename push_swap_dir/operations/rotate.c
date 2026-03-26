/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:03:20 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/26 18:48:28 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static void	rotate(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return ;
	if (!stack->head || !stack->tail)
		return ;
	stack->head = stack->head->next;
	stack->tail = stack->tail->next;
}

void	ra(t_stack *stack_a, bool is_checker)
{
	rotate(stack_a);
	if (!is_checker)
		ft_putendl_fd("ra", 1);
}

void	rb(t_stack *stack_b, bool is_checker)
{
	rotate(stack_b);
	if (!is_checker)
		ft_putendl_fd("rb", 1);
}

void	rr(t_stack *stack_a, t_stack *stack_b, bool is_checker)
{
	rotate(stack_a);
	rotate(stack_b);
	if (!is_checker)
		ft_putendl_fd("rr", 1);
}
