/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:26:59 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 11:30:41 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*#include <stdio.h>
#include <string.h>

void	*ft_strtoupper(void *content)
{
	char	*str;
	char	*copy;
	int		i;

	str = (char *)content;
	copy = strdup(str);
	i = 0;
	while(copy[i])
	{
		if (copy[i]>= 97 && copy[i] <= 122)
			copy[i] = copy[i] - 32;
		i++;
	}
	return (copy);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*ptr;

	lst = ft_lstnew(strdup("I love Matcha!"));
	lst->next = ft_lstnew(strdup("I love Sushi!"));
	lst->next->next = ft_lstnew(strdup("I love Chocolate Bun!"));
	lst->next->next->next = ft_lstnew(strdup("I love Mint Chocolate!"));
	lst->next->next->next->next = ft_lstnew(strdup("I love Chicken Lasagne!"));
	printf("Original List before function(lst):\n");
	ptr = lst;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	new = ft_lstmap(lst, (void(*))ft_strtoupper, del);
	printf("\nOriginal List after function(lst):\n");
	ptr = lst;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\nNew List after function(new):\n");
	ptr = new;
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ft_lstclear(&lst, del);
	ft_lstclear(&new, del);
}*/