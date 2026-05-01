/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:13 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:53:53 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*ub;

	uc = (unsigned char)c;
	ub = (unsigned char *)b;
	while (len--)
		*ub++ = uc;
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*b;
// 	int		c;
// 	size_t	len;
// 	char	*b1;
// 	int		c1;
// 	size_t	len1;
// 	char	*re;
// 	char	*re1;

// 	b = (char *)malloc(sizeof(char) * 10);
// 	c = 'A';
// 	len = 3;
// 	b1 = (char *)malloc(sizeof(char) * 10);
// 	c1 = 'A';
// 	len1 = 3;
// 	re =  (char *)memset (b, c, len);
// 	re1 = (char *)ft_memset (b1, c1, len1);
// 	printf("test\n");
// 	printf ("memset    -> %s\n", b);
// 	printf ("ft_memset -> %s\n", b1);
// 	printf("return value\n");
// 	printf ("memset    -> %s\n", re);
// 	printf ("ft_memset -> %s\n", re1);
// 	return (0);
// }
