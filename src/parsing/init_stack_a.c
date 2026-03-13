/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:52:11 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/12 20:38:20 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../../inc/push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = value;
	node->current_position = 0;
	node->final_index = 0;
	node->push_cost = 0;
	node->above_median = false;
	node->target_node = NULL;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

void	add_back(t_stack *stack, t_node *new)
{
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		stack->tail->next = new;
		new->prev = stack->tail;
		stack->tail = new;
	}
	stack->size++;
}

// void	init_stack_a(t_stack *a, char **argv)
// {
// 	int		i;
// 	int		num;
// 	t_node	*node;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		num = ft_atoi(argv[i]);
// 		node = new_node(num);
// 		if (!node)
// 			return ;
// 		add_back(a, node);
// 		i++;
// 	}
// }

void	init_stack_a(t_stack *stack_a, char **argv, bool is_argc_2)
{
	int		i;
	int		num;
	t_node	*node;


		
	i = 0;
	while (argv[i])
	{
		if(is_non_numeric(argv[i]))
			free_and_error(&stack_a);
		num = ft_atoi(argv[i]);
		
		node = new_node(num);
		if (!node)
			return ;
		add_back(a, node);
		i++;
	}
	if (is_argc_2)
		free_splitted_arg(argv);
}

void	init_stack(t_stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
}