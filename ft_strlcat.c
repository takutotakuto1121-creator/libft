/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:09 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 00:54:13 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen (dst);
	src_len = ft_strlen (src);
	if (dst_len + 1 > dstsize)
		return (dstsize + src_len);
	if (dst_len + 1 == dstsize)
		return (dst_len + src_len);
	while (*dst++)
		dstsize--;
	dst--;
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}

// #ifdef __linux__
// #include <bsd/string.h>
// #endif
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	dst[20] = "hello";
// 	char	src[20] = "world";
// 	char	dst1[20] = "hello";
// 	char	src1[20] = "world";
// 	char	dst2[20] = "hello";
// 	char	src2[20] = "world";
// 	char	dst3[20] = "hello";
// 	char	src3[20] = "world";
// 	char	dst4[20] = "hello";
// 	char	src4[20] = "world";
// 	char	dstf[20] = "hello";
// 	char	srcf[20] = "world";
// 	char	dst1f[20] = "hello";
// 	char	src1f[20] = "world";
// 	char	dst2f[20] = "hello";
// 	char	src2f[20] = "world";
// 	char	dst3f[20] = "hello";
// 	char	src3f[20] = "world";
// 	char	dst4f[20] = "hello";
// 	char	src4f[20] = "world";
// 	int		dstsize = 3;
// 	int		dstsize1 = 5;
// 	int		dstsize2 = 6;
// 	int		dstsize3 = 8;
// 	int		dstsize4 = 20;
// 	int		re = strlcat (dst, src, dstsize);
// 	int		re1 = strlcat (dst1, src1, dstsize1);
// 	int		re2 = strlcat (dst2, src2, dstsize2);
// 	int		re3 = strlcat (dst3, src3, dstsize3);
// 	int		re4 = strlcat (dst4, src4, dstsize4);
// 	int		ref = ft_strlcat (dstf, srcf, dstsize);
// 	int		re1f = ft_strlcat (dst1f, src1f, dstsize1);
// 	int		re2f = ft_strlcat (dst2f, src2f, dstsize2);
// 	int		re3f = ft_strlcat (dst3f, src3f, dstsize3);
// 	int		re4f = ft_strlcat (dst4f, src4f, dstsize4);

// 	printf("test1:dst_len < dstsize\n");
// 	printf("strlcat.   -> %s\n", dst);
// 	printf("ft_strlcat -> %s\n", dstf);
// 	printf("return value\n");
// 	printf("strlcat.   -> %d\n", re);
// 	printf("ft_strlcat -> %d\n\n", ref);
// 	printf("test1:dst_len = dstsize\n");
// 	printf("strlcat.   -> %s\n", dst1);
// 	printf("ft_strlcat -> %s\n", dst1f);
// 	printf("return value\n");
// 	printf("strlcat.   -> %d\n", re1);
// 	printf("ft_strlcat -> %d\n\n", re1f);
// 	printf("test1:dst_len + 1 = dstsize\n");
// 	printf("strlcat.   -> %s\n", dst2);
// 	printf("ft_strlcat -> %s\n", dst2f);
// 	printf("return value\n");
// 	printf("strlcat.   -> %d\n", re2);
// 	printf("ft_strlcat -> %d\n\n", re2f);
// 	printf("test1:dstsize < dst_len + 1 < all\n");
// 	printf("strlcat.   -> %s\n", dst3);
// 	printf("ft_strlcat -> %s\n", dst3f);
// 	printf("return value\n");
// 	printf("strlcat.   -> %d\n", re3);
// 	printf("ft_strlcat -> %d\n\n", re3f);
// 	printf("test1:dstsize is enough\n");
// 	printf("strlcat.   -> %s\n", dst4);
// 	printf("ft_strlcat -> %s\n", dst4f);
// 	printf("return value\n");
// 	printf("strlcat.   -> %d\n", re4);
// 	printf("ft_strlcat -> %d\n\n", re4f);
// 	return (0);
// }
