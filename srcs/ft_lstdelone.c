/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:39 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 00:43:48 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del ((lst)->content);
	free (lst);
	lst = NULL;
}

// #include <stdio.h>

// void	del(void *content)
// {
// 	free (content);
// }

// int	main(void)
// {
// 	char	*str = malloc(100);
// 	*str = 'a';
// 	t_list	*new = ft_lstnew(str);
// 	printf("--before--\n");
// 	printf("content -> %s\n", (char *)new->content);
// 	printf("next -> %p\n", new->next);
// 	printf("new -> %p\n", new);

// 	ft_lstdelone (new, &del);
// 	printf("--after--\n");
// 	printf("new -> %p\n", new);
// 	return (0);
// }
