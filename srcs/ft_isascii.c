/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:16 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 18:34:22 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return (0 <= uc && uc <= 127);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int	a = -1;
// 	int	b = 8;
// 	int	re = isascii (a);
// 	int	re1 = ft_isascii (a);
// 	int	re2 = isascii (b);
// 	int	re3 = ft_isascii (b);
// 	printf("test:isn't ascii\n");
// 	printf("isascii.   -> %d\n", re);
// 	printf("ft_isascii -> %d\n", re1);
// 	printf("test:is ascii\n");
// 	printf("isascii.   -> %d\n", re2);
// 	printf("ft_isascii -> %d\n", re3);
// }
