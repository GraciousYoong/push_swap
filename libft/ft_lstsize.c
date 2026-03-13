/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:44:53 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/05 16:35:13 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	if (!lst)
		return (0);
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*ptr;
	int		i;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = "Apple";
	lst->next = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	new->content = (char *)"Bear";
	new->next = NULL;
	lst->next = new;
	new = (t_list *)malloc(sizeof(t_list));
	new->content = (char *)"Carrot";
	new->next = NULL;
	lst->next->next = new;
	ptr = lst;
	i = 1;
	while (ptr)
	{
		printf("Content at node %d = %s.\n", i, (char *)ptr->content);
		ptr = ptr->next;
		i++;
	}
	printf("The number of nodes in the list = %d\n", ft_lstsize(lst));
}*/