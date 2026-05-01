/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:05 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:53:10 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
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
// 	re =  (char *)memcpy (b, c, len);
// 	re1 = (char *)ft_memcpy (b1, c1, len1);
// 	printf("test\n");
// 	printf ("memcpy    -> %s\n", b);
// 	printf ("ft_memcpy -> %s\n", b1);
// 	printf("return value\n");
// 	printf ("memcpy    -> %s\n", re);
// 	printf ("ft_memcpy -> %s\n", re1);
// 	return (0);
// }
