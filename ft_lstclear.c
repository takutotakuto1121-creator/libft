/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:36 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 00:44:29 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone (current, del);
		current = next;
	}
	*lst = NULL;
}

// #include <stdio.h>
// void	del(void *content)
// {
// 	free (content);
// }

// int	main(void)
// {
// 	t_list  *node1 = ft_lstnew(ft_strdup("node1"));
//     t_list  *node2 = ft_lstnew(ft_strdup("node2"));
//     t_list  *node3 = ft_lstnew(ft_strdup("node3"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("--before--\n");
// 	printf("node1 -> %s, %p\n", (char *)node1->content, node1);
// 	printf("node2 -> %s, %p\n", (char *)node2->content, node2);
// 	printf("node2 -> %s, %p\n", (char *)node3->content, node3);

// 	ft_lstclear (&node1, &del);
// 	printf("--after--\n");
// 	printf("node1 -> %p\n", node1);
// 	printf("node2 -> %s\n", (char *)node2->content);
// 	printf("node2 -> %s\n", (char *)node3->content);
// 	return (0);
// }
