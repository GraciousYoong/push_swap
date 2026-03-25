/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:59:08 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/25 17:47:50 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h" 

typedef struct s_node
{
	int					num;
	int					current_position;
	int					cost;
	bool				above_median;
	bool				cheapest;
	struct s_node		*target_node;	
	struct s_node		*prev;
	struct s_node		*next;
}	t_node;

typedef struct s_stack
{
	struct s_node		*head;
	struct s_node		*tail;
	int					size;
}	t_stack;

//Initializing Stack
void	init_stack(t_stack *stack);
void	init_stack_a(t_stack *stack_a, char **argv, bool is_argc_2);

//Stack Utilities
t_node	*new_node(int value);
void	add_back(t_stack *stack_a, t_node *new);
bool	stack_sorted(t_stack *stack_a);
t_node	*find_smallest(t_stack *stack_a);
t_node	*find_cheapest(t_stack *stack_b);

//Parsing Arguments
char	**split_arg(char *str, char c);
bool	is_non_numeric(char *num_str);
bool	is_duplicate(int num, t_stack *stack_a);

//Error Management
void	free_stack(t_stack *stack_a);
void	free_splitted_arg(char	**argv);
void	free_and_error(t_stack *stack_a, char **argv, bool is_argc_2);

//Operation Commands
void	pa(t_stack *stack_a, t_stack *stack_b, bool is_checker);
void	pb(t_stack *stack_a, t_stack *stack_b, bool is_checker);
void	sa(t_stack *stack_a, bool is_checker);
void	sb(t_stack *stack_b, bool is_checker);
void	ss(t_stack *stack_a, t_stack *stack_b, bool is_checker);
void	ra(t_stack *stack_a, bool is_checker);
void	rb(t_stack *stack_b, bool is_checker);
void	rr(t_stack *stack_a, t_stack *stack_b, bool is_checker);
void	rra(t_stack *stack_a, bool is_checker);
void	rrb(t_stack *stack_b, bool is_checker);
void	rrr(t_stack *stack_a, t_stack *stack_b, bool is_checker);

// Initializing Nodes for Big Sort
void	init_nodes(t_stack *stack_a, t_stack *stack_b);
void	set_current_position(t_stack *stack);
t_node	*find_target_node(t_stack *stack_a, t_node *current_b);
void	fill_target_node(t_stack *stack_a, t_stack *stack_b);
void	set_cost(t_stack *stack_a, t_stack *stack_b);
void	set_cheapest(t_stack *stack_b);

//Sorting Algorithm
void	sort_three(t_stack *stack_a);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
void	sort_big(t_stack *stack_a, t_stack *stack_b);
void	move_nodes(t_stack *stack_a, t_stack *stack_b);
void	finish_rotation(t_stack *stack, t_node *top_node, char stack_name);

#endif