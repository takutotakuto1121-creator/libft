/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:33 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:34 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list *node1 = ft_lstnew ("hello");
// 	t_list *node2 = ft_lstnew ("world");
// 	node1->next = node2;
// 	t_list **alst = &node1;
// 	printf("--before--\n");
// 	printf("node1 -> %p\n", node1);
// 	printf("node2 -> %p\n", node2);
// 	printf("alst -> %p\n", *alst);
// 	t_list *node3 = ft_lstnew ("start");
// 	ft_lstadd_front (alst, node3);
// 	printf("--after--\n");
// 	printf("node3 -> %p\n", node3);
// 	printf("node3->next -> %p\n", node3->next);
// 	printf("alst -> %p\n", *alst);
// 	return (0);
// }
