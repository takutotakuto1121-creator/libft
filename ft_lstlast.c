/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:44 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:45 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew ("hell1");
// 	t_list	*node2 = ft_lstnew ("hell2");
// 	t_list	*node3 = ft_lstnew ("hell3");

// 	node1->next = node2;
// 	node2->next = node3;

// 	t_list	*node =  ft_lstlast(node1);
// 	printf("%s\n", (char *)node->content);
// }
