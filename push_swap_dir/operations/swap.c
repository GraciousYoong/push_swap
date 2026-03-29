/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 15:59:55 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 15:28:31 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

static void	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	if (!stack || stack->size < 2)
		return ;
	first = stack->head;
	second = stack->head->next;
	if (stack->size == 2)
	{
		stack->head = second;
		stack->tail = first;
		return ;
	}
	third = stack->tail;
	third->prev = first;
	third->next = second;
	first->prev = second;
	first->next = third;
	second->prev = third;
	second->next = first;
	stack->head = second;
}

void	sa(t_stack *stack_a, bool is_checker)
{
	swap(stack_a);
	if (!is_checker)
		ft_putendl_fd("sa", 1);
}

void	sb(t_stack *stack_b, bool is_checker)
{
	swap(stack_b);
	if (!is_checker)
		ft_putendl_fd("sb", 1);
}

void	ss(t_stack *stack_a, t_stack *stack_b, bool is_checker)
{
	swap(stack_a);
	swap(stack_b);
	if (!is_checker)
		ft_putendl_fd("ss", 1);
}
