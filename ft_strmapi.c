/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:19 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:19 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	char			*head;
	unsigned int	i;

	map = (char *)malloc(sizeof(char) * (ft_strlen (s) + 1));
	if (!map)
		return (NULL);
	head = map;
	i = 0;
	while (*s)
		*map++ = f(i++, *s++);
	*map = '\0';
	return (head);
}

// #include <stdio.h>
// char	a(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		c += 'A' - 'a';
// 	return (c);
// }
// int	main(void)
// {
// 	char	*s = "hello";
// 	char	*map = ft_strmapi (s, &a);
// 	printf("--before--\n");
// 	printf("%s\n", s);
// 	printf("--after--\n");
// 	printf("%s\n", map);
// }
