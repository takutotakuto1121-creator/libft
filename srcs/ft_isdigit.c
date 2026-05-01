/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:19 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:20 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ('0' <= uc && uc <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int	a = '2';
// 	int	b = 'a';
// 	int	c = 0;
// 	int	re = isdigit (a);
// 	int	ref = ft_isdigit (a);
// 	int	re1 = isdigit (b);
// 	int	ref1 = ft_isdigit (b);
// 	int	re2 = isdigit (c);
// 	int	ref2 = ft_isdigit (c);
// 	printf("test:find digit\n");
// 	printf("isdigit.   -> %d\n", re);
// 	printf("ft_osdigit -> %d\n", ref);
// 	printf("test:don't find digit\n");
// 	printf("isdigit.   -> %d\n", re1);
// 	printf("ft_osdigit -> %d\n", ref1);
// 	printf("test:c is null\n");
// 	printf("isdigit.   -> %d\n", re2);
// 	printf("ft_osdigit -> %d\n", ref2);
// }
