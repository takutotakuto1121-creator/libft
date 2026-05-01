/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:33 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:34 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*head;

	head = dst;
	while (*src && len--)
		*dst++ = *src++;
	return (head);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*dst = malloc (100);
// 	char	*dst1 = malloc (100);
// 	int		len = 7;
// 	char	*src = "hello world";
// 	dst = strncpy (dst, src, len);
// 	dst1 = ft_strncpy (dst1, src, len);
// 	printf("test\n");
// 	printf("strncpy.   -> %s\n", dst);
// 	printf("ft_strncpy -> %s\n", dst1);
// 	return (0);
// }
