/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:51:12 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/17 15:27:48 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	init_stack(&stack_a);
	init_stack(&stack_b);
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split_arg(argv[1], ' ');
	init_stack_a(&stack_a, argv + 1, argc == 2);
	if (!stack_sorted(stack_a))
	{
		if ((stack_a.size) == 2)
			sa(&stack_a, false);
		else if ((stack_a.size) == 3)
			sort_three(&stack_a);
		else if ((stack_a.size) == 5)
			sort_five(&stack_a, &stack_b);
		else
			sort_big(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
	return (0);
}
