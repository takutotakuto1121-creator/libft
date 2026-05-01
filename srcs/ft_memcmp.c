/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:03 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:03 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*us1 != *us2)
			return ((int)(*us1 - *us2));
		us1++;
		us2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s1 = "hello world";
// 	char	*s2 = "hello worll";
// 	size_t	n = 11;
// 	int		re = memcmp (s1, s2, n);
// 	char	*s11 = "hello world";
// 	char	*s21 = "hello worll";
// 	size_t	n1 = 11;
// 	int		re1 = memcmp (s11, s21, n1);
// 	printf("test1:find difference\n");
// 	printf("memcmp    -> %d\n", re);
// 	printf("ft_memcmp -> %d\n", re1);
// 	printf("\n");

// 	char	*s12 = "hello world";
// 	char	*s22 = "hello worll";
// 	size_t	n2 = 5;
// 	int		re2 = memcmp (s12, s22, n2);
// 	char	*s112 = "hello world";
// 	char	*s212 = "hello worll";
// 	size_t	n12 = 5;
// 	int		re12 = memcmp (s112, s212, n12);
// 	printf("test2:don't find difference\n");
// 	printf("memcmp    -> %d\n", re2);
// 	printf("ft_memcmp -> %d\n", re12);
// 	return (0);
// }
