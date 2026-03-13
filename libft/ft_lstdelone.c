/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:54:55 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/05 21:45:13 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>
#include <string.h>
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	
	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node1->content = strdup("Apple");
	node1->next = node2;
	node2->content = strdup("Banana");
	node2->next = NULL;
	printf("Before deleting node1:\n");
	printf("%s\n", (char *)node1->content);
	printf("%s\n\n", (char *)node2->content);
	ft_lstdelone(node1, del);
	printf("After deleting node1:\n");
	printf("%s\n\n", (char *)node2->content);
	ft_lstdelone(node2, del);
}*/