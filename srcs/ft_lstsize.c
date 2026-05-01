/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:52 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:53 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew ("hello");
// 	t_list	*node2 = ft_lstnew ("hello");
// 	t_list	*node3 = ft_lstnew ("hello");

// 	node1->next = node2;
// 	node2->next = node3;

// 	int	size = ft_lstsize (node1);
// 	printf("%d\n", size);
// }
