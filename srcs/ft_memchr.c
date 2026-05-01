/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:00 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:01 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*us;
	unsigned char		uc;

	us = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*us == uc)
			return ((void *)us);
		us++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s = "hello";
// 	int		c = 'e';
// 	size_t	n = 4;
// 	char	*re = memchr (s, c, n);
// 	char	*s1 = "hello";
// 	int		c1 = 'e';
// 	size_t	n1 = 4;
// 	char	*re1 = ft_memchr (s1, c1, n1);
// 	printf("test1:find c\n");
// 	printf ("memchr    -> %s\n", s);
// 	printf ("ft_memchr -> %s\n", s1);
// 	printf("return value\n");
// 	printf ("memchr    -> %s\n", re);
// 	printf ("ft_memchr -> %s\n", re1);
// 	printf("\n");

// 	char	*s2 = "hello";
// 	int		c2 = 'a';
// 	size_t	n2 = 7;
// 	char	*re2 = memchr (s2, c2, n2);
// 	char	*s3 = "hello";
// 	int		c3 = 'a';
// 	size_t	n3 = 7;
// 	char	*re3 = ft_memchr (s3, c3, n3);
// 	printf("test2:don't find c\n");
// 	printf ("memchr    -> %s\n", s2);
// 	printf ("ft_memchr -> %s\n", s3);
// 	printf("return value\n");
// 	printf ("memchr    -> %s\n", re2);
// 	printf ("ft_memchr -> %s\n", re3);
// 	printf("\n");
// }
