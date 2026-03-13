/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:19:49 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/06 10:34:29 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>
#include <string.h>

void	*ft_strtoupper(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while(str[i])
	{
		if (str[i]>= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (content);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *lst;
	t_list *ptr;
	
	lst = (t_list *)malloc(sizeof(t_list));
	lst->content = strdup("First");
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->content = strdup("Second");
	lst->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->content = strdup("Third");
	lst->next->next->next = NULL;
	ptr = lst;
	printf("Before function:\n");
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ptr = lst;
	ft_lstiter(lst, (void (*))ft_strtoupper);
	printf("\nAfter function:\n");
	while (ptr)
	{
		printf("%s\n", (char *)ptr->content);
		ptr = ptr->next;
	}
	ft_lstclear(&lst, del);
	return (0);
}*/