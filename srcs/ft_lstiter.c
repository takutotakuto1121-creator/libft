/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:42 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 00:39:38 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f (lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// void	f(void *content)
// {
// 	content = "change";
// }

// int	main(void)
// {
// 	t_list  *node1 = ft_lstnew(ft_strdup("node1"));
//     t_list  *node2 = ft_lstnew(ft_strdup("node2"));
// 	node1->next = node2;
// 	printf("--before--\n");
// 	printf("node1 -> %s\n", (char *)node1->content);
// 	printf("node2 -> %s\n", (char *)node2->content);

// 	ft_lstiter (node1, &f);
// 	printf("--after--\n");
// 	printf("node1 -> %s\n", (char *)node1->content);
// 	printf("node2 -> %s\n", (char *)node2->content);
// 	return (0);
// }
