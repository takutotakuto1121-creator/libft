/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:16 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:16 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	char	*head;

	map = (char *)malloc(sizeof(char) * (ft_strlen (s) + 1));
	if (!map)
		return (NULL);
	head = map;
	while (*s)
		*map++ = f (*s++);
	*map = '\0';
	return (head);
}

// #include <stdio.h>
// char	a(char c)
// {
// 	char	d;
// 	if ('a' <= c && c <= 'z')
// 		d = c + 'A' - 'a';
// 	else
// 		d = c;
// 	return (d);
// }
// int	main(void)
// {
// 	char	s[] = "hello";
// 	printf("--before--\n");
// 	printf("%s, %p\n", s, s);
// 	char	*map = ft_strmap (s, &a);
// 	printf("--after--\n");
// 	printf("%s, %p\n", map, map);
// }
