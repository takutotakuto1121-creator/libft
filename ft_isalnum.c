/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:06 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:07 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha (c) || ft_isdigit (c));
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int	a = 'a';
// 	int b = '1';
// 	int c = ' ';
// 	int	re = isalnum (a);
// 	int	re1 = ft_isalnum (a);
// 	int	re2 = isalnum (b);
// 	int	re3 = ft_isalnum (b);
// 	int	re4 = isalnum (c);
// 	int	re5 = ft_isalnum (c);
// 	printf("test\n");
// 	printf("isalnum.   -> %d\n", re);
// 	printf("ft_isalnum -> %d\n", re1);
// 	printf("test\n");
// 	printf("isalnum.   -> %d\n", re2);
// 	printf("ft_isalnum -> %d\n", re3);
// 	printf("test\n");
// 	printf("isalnum.   -> %d\n", re4);
// 	printf("ft_isalnum -> %d\n", re5);
// 	return (0);
// }
