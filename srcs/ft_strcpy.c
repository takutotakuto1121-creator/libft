/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:50 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:51 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*head;

	head = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (head);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*dst = malloc (100);
// 	char	*dst1 = malloc (100);
// 	char	*src = "hello world";
// 	dst = strcpy (dst, src);
// 	dst1 = ft_strcpy (dst1, src);
// 	printf("test\n");
// 	printf("strcpy.   -> %s\n", dst);
// 	printf("ft_strcpy -> %s\n", dst1);
// 	return (0);
// }
