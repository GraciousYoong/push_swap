/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:03:08 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/05 18:26:09 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*ptr;

	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = (char *)"First";
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->content = (char *)"Second";
	lst->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->content = (char *)"Third";
	lst->next->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->next->content = (char *)"Forth";
	lst->next->next->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->next->next->content = (char *)"Last";
	lst->next->next->next->next->next = NULL;
	ptr = lst;
	printf("List before function:\n");
	while(ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ptr = ft_lstlast(lst);
	printf("\nList after function:\n");
	while(ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
}*/