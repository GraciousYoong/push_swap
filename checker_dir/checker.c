/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 03:44:29 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/24 03:44:29 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "../push_swap_dir/push_swap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

static void	error(t_stack *stack_a, t_stack *stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	ft_putendl_fd("Error", 2);
	exit(1);
}

static void	parse_operations(t_stack *stack_a,
	t_stack *stack_b,
	char *operation)
{
	if (!ft_strcmp(operation, "pa\n"))
		pa(stack_a, stack_b, true);
	else if (!ft_strcmp(operation, "pb\n"))
		pb(stack_a, stack_b, true);
	else if (!ft_strcmp(operation, "sa\n"))
		sa(stack_a, true);
	else if (!ft_strcmp(operation, "sb\n"))
		sb(stack_b, true);
	else if (!ft_strcmp(operation, "ss\n"))
		ss(stack_a, stack_b, true);
	else if (!ft_strcmp(operation, "ra\n"))
		ra(stack_a, true);
	else if (!ft_strcmp(operation, "rb\n"))
		rb(stack_b, true);
	else if (!ft_strcmp(operation, "rr\n"))
		rr(stack_a, stack_b, true);
	else if (!ft_strcmp(operation, "rra\n"))
		rra(stack_a, true);
	else if (!ft_strcmp(operation, "rrb\n"))
		rrb(stack_b, true);
	else if (!ft_strcmp(operation, "rrr\n"))
		rrr(stack_a, stack_b, true);
	else
		error(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		stack_size;
	char	*next_line;

	init_stack(&stack_a);
	init_stack(&stack_b);
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split_arg(argv[1], ' ');
	init_stack_a(&stack_a, argv + 1, argc == 2);
	stack_size = stack_a.size;
	next_line = get_next_line(STDIN_FILENO);
	while (next_line)
	{
		parse_operations(&stack_a, &stack_b, next_line);
		next_line = get_next_line(STDIN_FILENO);
	}
	if (stack_sorted(&stack_a) && stack_a.size == stack_size)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&stack_a);
	return (0);
}
