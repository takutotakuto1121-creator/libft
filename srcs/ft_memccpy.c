/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:58 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:58 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		uc;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	uc = (unsigned char)c;
	while (n--)
	{
		*d = *s;
		if (*s == uc)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*dst;
// 	char	*src;
// 	int		c;
// 	size_t	n;
// 	char	*re;
// 	dst = malloc(30);
// 	src = malloc(30);
// 	src = "hello world";
// 	c = 'o';
// 	n = 6;
// 	re = memccpy (dst, src, c, n);

// 	char	*dst1;
// 	char	*src1;
// 	int		c1;
// 	size_t	n1;
// 	char	*re1;
// 	dst1 = malloc(30);
// 	src1 = malloc(30);
// 	src1 = "hello world";
// 	c1 = 'o';
// 	n1 = 6;
// 	re1 = ft_memccpy (dst1, src1, c1, n1);

// 	char	*dst2;
// 	char	*src2;
// 	int		c2;
// 	size_t	n2;
// 	char	*re2;
// 	dst2 = malloc(30);
// 	src2 = malloc(30);
// 	src2 = "hello world";
// 	c2 = 'r';
// 	n2 = 7;
// 	re2 = memccpy (dst2, src2, c2, n2);

// 	char	*dst3;
// 	char	*src3;
// 	int		c3;
// 	size_t	n3;
// 	char	*re3;
// 	dst3 = malloc(30);
// 	src3 = malloc(30);
// 	src3 = "hello world";
// 	c3 = 'r';
// 	n3 = 7;
// 	re3 = ft_memccpy (dst3, src3, c3, n3);

// 	printf("test1:stop by o\n");
// 	printf("memccpy    -> %s\n", dst);
// 	printf("ft_memccpy -> %s\n", dst1);
// 	printf("return value\n");
// 	printf("memccpy    -> %s, %p\n", re, re);
// 	printf("ft_memccpy -> %s, %p\n", re1, re1);
// 		// dst and dst1 is differnt, so the pointer of
// 		// re and re1 is also different
// 	printf("\n");
// 	printf("test2:stop by n\n");
// 	printf("memccpy    -> %s\n", dst2);
// 	printf("ft_memccpy -> %s\n", dst3);
// 	printf("return value\n");
// 	printf("memccpy    -> %s, %p\n", re2, re2);
// 	printf("ft_memccpy -> %s, %p\n", re3, re3);
// }
