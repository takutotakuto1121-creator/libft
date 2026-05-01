/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:46:58 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:46:59 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*us;

	us = (unsigned char *)s;
	while (n--)
		*us++ = 0;
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*b;
// 	size_t	len;
// 	char	*b1;
// 	size_t	len1;

// 	b = (char *)malloc(sizeof(char) * 10);
// 	*b = '1';
// 	len = 3;
// 	b1 = (char *)malloc(sizeof(char) * 10);
// 	*b1 = '1';
// 	len1 = 3;
// 	bzero (b, len);
// 	ft_bzero (b1, len1);
// 	printf ("bzero    -> %s, %d\n", b, (int)strlen(b));
// 	printf ("ft_bzero -> %s, %d\n", b1, (int)strlen(b1));
// 	return (0);
// }
