/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 11:13:44 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/25 19:39:46 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../push_swap.h"

void	free_stack(t_stack *stack_a)
{
	t_node	*current;
	t_node	*next;

	if (!stack_a || !stack_a->head)
		return ;
	if (stack_a->tail)
		stack_a->tail->next = NULL;
	current = stack_a->head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	stack_a->head = NULL;
	stack_a->tail = NULL;
	stack_a->size = 0;
}

void	free_splitted_arg(char	**argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	free_and_error(t_stack *stack_a, char **argv, bool is_argc_2)
{
	free_stack(stack_a);
	if (is_argc_2)
		free_splitted_arg(argv);
	ft_putendl_fd("Error", 2);
	exit(1);
}
