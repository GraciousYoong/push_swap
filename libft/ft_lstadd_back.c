/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:57:10 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 11:30:09 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*newptr;
	t_list	*new;

	int		i;
	if (argc == 2)
	{
		lst = NULL;
		lst = (t_list *)malloc(sizeof(t_list));
		lst->content = (char *)"Tenet";
		lst->next = NULL;
		newptr = (t_list *)malloc(sizeof(t_list));
		newptr->content = (char *)"Dunkirk";
		newptr->next = NULL;
		lst->next = newptr;
		newptr = (t_list *)malloc(sizeof(t_list));
		newptr->content = (char *)"Inception";
		newptr->next = NULL;
		lst->next->next = newptr;
		newptr = (t_list *)malloc(sizeof(t_list));
		newptr->content = (char *)"Dark Knight";
		newptr->next = NULL;
		lst->next->next->next = newptr;
		newptr = lst;
		i = 1;
		printf("Before adding node to back:\n");
		while (newptr)
		{
			printf("The content at node %d = %s.\n", i, (char *)newptr->content);
			newptr = newptr->next;
			i++;
		}
		printf("\n");
		new = (t_list *)malloc(sizeof(t_list));
		new->content = (char *)argv[1];
		new->next = NULL;
		ft_lstadd_back(&lst, new);
		newptr = lst;
		i = 1;
		printf("After adding node to back:\n");
		while (newptr)
		{
			printf("The content at node %d = %s.\n", i, (char *)newptr->content);
			newptr = newptr->next;
			i++;
		}
		free (lst);
		free (newptr);
	}
	else
	{
		printf("Please enter %s <string for node's content>", argv[0]);
		return (1);
	}
	return (0);
}*/