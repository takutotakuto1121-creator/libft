/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:09 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:51:43 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (('a' <= uc && uc <= 'z') || ('A' <= uc && uc <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int	x = 'x';
// 	int	G = 'G';
// 	int a = 150;
// 	int	re = isalpha (x);
// 	int	re1 = ft_isalpha (x);
// 	int	re2 = isalpha (G);
// 	int	re3 = ft_isalpha (G);
// 	int	re4 = isalpha (a);
// 	int	re5 = ft_isalpha (a);
// 	printf("test:lower\n");
// 	printf("isalpha.   -> %d\n", re);
// 	printf("ft_isalpha -> %d\n", re1);
// 	printf("test:upper\n");
// 	printf("isalpha.   -> %d\n", re2);
// 	printf("ft_isalpha -> %d\n", re3);
// 	printf("test:isn't alphabet\n");
// 	printf("isalpha.   -> %d\n", re4);
// 	printf("ft_isalpha -> %d\n", re5);
// 	return (0);
// }
