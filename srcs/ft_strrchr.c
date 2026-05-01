/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:44 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:45 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*re;

	re = NULL;
	while (*s)
	{
		if (*s == (char)c)
			re = (char *)s;
		s++;
	}
	if (*s == (char)c)
		re = (char *)s;
	return (re);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s = "hello";
// 	int		c = 'l';
// 	char	*re = strrchr (s, c);
// 	char	*ref = ft_strrchr (s, c);
// 	printf ("test1:find c 2 times\n");
// 	printf ("strrchr    -> %s\n", re);
// 	printf ("ft_strrchr -> %s\n\n", ref);

// 	char	*s1 = "hello";
// 	int		c1= 'd';
// 	char	*re1 = strrchr (s1, c1);
// 	char	*ref1 = ft_strrchr (s1, c1);
// 	printf ("test1:don't find c\n");
// 	printf ("strrchr    -> %s\n", re1);
// 	printf ("ft_strrchr -> %s\n\n", ref1);

// 	char	*s2 = "hello";
// 	int		c2 = 0;
// 	char	*re2 = strrchr (s2, c2);
// 	char	*ref2 = ft_strrchr (s2, c2);
// 	printf ("test1:c is null\n");
// 	printf ("strrchr    -> %s\n", re2);
// 	printf ("ft_strrchr -> %s\n\n", ref2);
// }
