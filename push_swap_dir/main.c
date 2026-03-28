/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:51:12 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/28 23:12:38 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "push_swap.h"

static void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	if ((stack_a->size) == 2)
		sa(stack_a, false);
	else if ((stack_a->size) == 3)
		sort_three(stack_a);
	else if ((stack_a->size) == 5)
		sort_five(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	char	**splitted_arg;

	init_stack(&stack_a);
	init_stack(&stack_b);
	splitted_arg = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		splitted_arg = split_arg(argv[1], ' ');
		init_stack_a(&stack_a, splitted_arg, true);
	}
	else
		init_stack_a(&stack_a, argv + 1, false);
	if (!stack_sorted(&stack_a))
		push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
