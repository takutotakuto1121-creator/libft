/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:29 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:52:25 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast (*lst);
	last->next = new;
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew ("hell1");
// 	t_list	*node2 = ft_lstnew ("hell2");
// 	t_list	*node3 = ft_lstnew ("hell3");
// 	node1->next = node2;

// 	ft_lstadd_back(&node1, node3);
// 	printf("%s\n", (char *)node1->next->next->content);
// }
