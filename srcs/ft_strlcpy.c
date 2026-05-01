/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:11 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 18:34:42 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen (src);
	if (!dstsize)
		return (src_len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst++ = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char dst[] = "hello";
// 	char src[] = "AAA";
// 	int dstsize = 6;
// 	int re = strlcpy (dst, src, dstsize);
// 	char dstf[] = "hello";
// 	char srcf[] = "AAA";
// 	int dstsizef = 6;
// 	int ref = ft_strlcpy (dstf, srcf, dstsizef);
// 	char dst1[] = "hello";
// 	char src1[] = "AAAAAA";
// 	int dstsize1 = 6;
// 	int re1 = strlcpy (dst1, src1, dstsize1);
// 	char dst1f[] = "hello";
// 	char src1f[] = "AAAAAA";
// 	int dstsize1f = 6;
// 	int re1f = ft_strlcpy (dst1f, src1f, dstsize1f);
// 	char dst2[] = "hello";
// 	char src2[] = "";
// 	int dstsize2 = 6;
// 	int re2 = strlcpy (dst2, src2, dstsize2);
// 	char dst2f[] = "hello";
// 	char src2f[] = "";
// 	int dstsize2f = 6;
// 	int re2f = ft_strlcpy (dst2f, src2f, dstsize2f);

// 	printf("test:dstsize > len_src\n");
// 	printf("strlcpy   -> %s\n", dst);
// 	printf("ft_strlcpy -> %s\n", dstf);
// 	printf("return value\n");
// 	printf("strlcpy  -> %d\n", re);
// 	printf("ft_printf -> %d\n", ref);
// 	printf("\n");
// 	printf("test:dstsize > len_src\n");
// 	printf("strlcpy   -> %s\n", dst1);
// 	printf("ft_strlcpy -> %s\n", dst1f);
// 	printf("return value\n");
// 	printf("strlcpy  -> %d\n", re1);
// 	printf("ft_printf -> %d\n", re1f);
// 	printf("\n");
// 	printf("test:dstsize > len_src\n");
// 	printf("strlcpy   -> %s\n", dst2);
// 	printf("ft_strlcpy -> %s\n", dst2f);
// 	printf("return value\n");
// 	printf("strlcpy  -> %d\n", re2);
// 	printf("ft_printf -> %d\n", re2f);

// 	//return value is the length of source.
// }
