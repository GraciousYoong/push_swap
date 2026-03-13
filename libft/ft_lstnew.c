/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:51:32 by gyoong            #+#    #+#             */
/*   Updated: 2025/11/04 18:17:48 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*newlist;

	if (argc == 2)
	{
		newlist = ft_lstnew(argv[1]);
		printf("%s", (char *)newlist->content);
	}
	else
	{
		printf("Please enter ./a.out <string>");
		return (1);
	}
	return (0);
}*/