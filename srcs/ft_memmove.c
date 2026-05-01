/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:11 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:53:27 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*b;
// 	char	*c;;
// 	size_t	len;
// 	char	*b1;
// 	char	*c1;
// 	size_t	len1;
// 	char	*re;
// 	char	*re1;
// 	b = (char *)malloc(sizeof(char) * 10);
// 	c = "hello";
// 	len = 3;
// 	b1 = (char *)malloc(sizeof(char) * 10);
// 	c1 = "hello";
// 	len1 = 3;
// 	re =  (char *)ft_memmove (b, c, len);
// 	re1 = (char *)memmove (b1, c1, len1);
// 	printf("test1:dst and src are unrelated\n");
// 	printf ("memmove    -> %s\n", b);
// 	printf ("ft_memmove -> %s\n", b1);
// 	printf("return value\n");
// 	printf ("memmove    -> %s\n", re);
// 	printf ("ft_memmove -> %s\n", re1);
// 	printf("\n");

// 	char	str[] = "ABCDEFG";
// 	char	*dst = &str[0];
// 	char	*src = &str[2];
// 	int		lenn = 5;
// 	char	*ret = ft_memmove (dst, src, lenn);
// 	char	str1[] = "ABCDEFG";
// 	char	*dst1 = &str1[0];
// 	char	*src1 = &str1[2];
// 	int		lenn1 = 5;
// 	char	*ret1 = memmove (dst1, src1, lenn1);
// 	printf("test2:dst < src\n");
// 	printf ("memmove    -> %s\n", dst);
// 	printf ("ft_memmove -> %s\n", dst1);
// 	printf("return value\n");
// 	printf ("memmove    -> %s\n", ret);
// 	printf ("ft_memmove -> %s\n", ret1);
// 	printf("\n");

// 	char	str2[] = "ABCDEFG";
// 	char	*dst2 = &str2[2];
// 	char	*src2 = &str2[0];
// 	int		lenn2 = 5;
// 	char	*ret2 = ft_memmove (dst2, src2, lenn2);
// 	char	str3[] = "ABCDEFG";
// 	char	*dst3 = &str3[2];
// 	char	*src3 = &str3[0];
// 	int		lenn3 = 5;
// 	char	*ret3 = memmove (dst3, src3, lenn3);
// 	printf("test2:dst > src\n");
// 	printf ("memmove    -> %s\n", dst2);
// 	printf ("ft_memmove -> %s\n", dst3);
// 	printf("return value\n");
// 	printf ("memmove    -> %s\n", ret2);
// 	printf ("ft_memmove -> %s\n", ret3);
// 	printf("\n");

// 	char	str4[] = "ABCDEFG";
// 	char	*dst4 = &str4[0];
// 	char	*src4 = &str4[0];
// 	int		lenn4 = 5;
// 	char	*ret4 = ft_memmove (dst4, src4, lenn4);
// 	char	str5[] = "ABCDEFG";
// 	char	*dst5 = &str5[0];
// 	char	*src5 = &str5[0];
// 	int		lenn5 = 5;
// 	char	*ret5 = memmove (dst5, src5, lenn5);
// 	printf("test2:dst > src\n");
// 	printf ("memmove    -> %s\n", dst4);
// 	printf ("ft_memmove -> %s\n", dst5);
// 	printf("return value\n");
// 	printf ("memmove    -> %s\n", ret4);
// 	printf ("ft_memmove -> %s\n", ret5);
// 	printf("\n");

// 	char	*dst6 = NULL;
// 	char	*src6 = NULL;;
// 	int		lenn6 = 5;
// 	char	*ret6 = ft_memmove (dst6, src6, lenn6);
// 	char	*dst7 = NULL;
// 	char	*src7 = NULL;;
// 	int		lenn7 = 5;
// 	char	*ret7 = memmove (dst7, src7, lenn7);
// 	printf("test2:dst and src is NULL\n");
// 	printf ("memmove    -> %s\n", dst6);
// 	printf ("ft_memmove -> %s\n", dst7);
// 	printf("return value\n");
// 	printf ("memmove    -> %s\n", ret6);
// 	printf ("ft_memmove -> %s\n", ret7);
// 	printf("\n");

// 	return (0);
// }
