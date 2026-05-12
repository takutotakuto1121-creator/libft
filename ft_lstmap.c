/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:47 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 00:41:01 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_node = NULL;
	new_lst = new_node;
	while (lst)
	{
		content = f (lst->content);
		new_node = ft_lstnew (content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// #include <stdio.h>
// void	*f(void *content)
// {
// 	return (ft_strdup ("change"));
// }

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

// 	printf ("--before--\n");
// 	printf ("node1 -> %s\n", (char *)node1->content);
// 	printf ("node2 -> %s\n", (char *)node2->content);
// 	printf ("node3 -> %s\n", (char *)node3->content);

// 	t_list	*new = ft_lstmap (node1, f, del);

// 	printf ("--after--\n");
// 	printf ("node1 -> %s\n", (char *)new->content);
// 	printf ("node2 -> %s\n", (char *)new->next->content);
// 	printf ("node3 -> %s\n", (char *)new->next->next->content);
// }
