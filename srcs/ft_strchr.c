/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:43 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:43 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s = "hello";
// 	int		c = 'e';
// 	char	*re = strchr (s, c);
// 	char	*ref = ft_strchr (s, c);
// 	printf ("test1:find c\n");
// 	printf ("strchr    -> %s\n", re);
// 	printf ("ft_strchr -> %s\n\n", ref);

// 	char	*s1 = "hello";
// 	int		c1= 'd';
// 	char	*re1 = strchr (s1, c1);
// 	char	*ref1 = ft_strchr (s1, c1);
// 	printf ("test1:don't find c\n");
// 	printf ("strchr    -> %s\n", re1);
// 	printf ("ft_strchr -> %s\n\n", ref1);

// 	char	*s2 = "hello";
// 	int		c2 = 0;
// 	char	*re2 = strchr (s2, c2);
// 	char	*ref2 = ft_strchr (s2, c2);
// 	printf ("test1:c is null\n");
// 	printf ("strchr    -> %s\n", re2);
// 	printf ("ft_strchr -> %s\n\n", ref2);
// }
