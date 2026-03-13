/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:01:57 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/05 22:00:41 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp->next;
		del(temp->content);
		free(temp);
		temp = next;
	}
	*lst = NULL;
}

/*#include <string.h>
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*temp;

	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));
	a->content = strdup("Welcome");
	b->content = strdup("to");
	c->content = strdup("42kl");
	a->next = b;
	b->next = c;
	c->next = NULL;
	temp = a;
	printf("Before clearing list:\n");
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&a, del);
	printf("\nAfter clearing list:\n");
	if (!a)
		printf("The list is successfully cleared!");
}*/
