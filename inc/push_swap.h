/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:59:08 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/12 18:29:40 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/includes/libft.h" 

typedef struct s_node
{
	int					num;
	int					current_position;
	int					final_index;
	int					push_cost;
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

# endif