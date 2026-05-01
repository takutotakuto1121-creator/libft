/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:22 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:55:45 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*head;

	head = s1;
	while (*s1)
		s1++;
	while (*s2 && n--)
		*s1++ = *s2++;
	*s1 = '\0';
	return (head);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s1 = malloc (100);
// 	strcpy (s1, "hello");
// 	char	*s11 = malloc (100);
// 	strcpy (s11, "hello");
// 	char	*s2 = "world";
// 	int		n = 3;
// 	char	*re = strncat (s1, s2, n);
// 	char	*re1 = ft_strncat (s11, s2, n);
// 	printf("test\n");
// 	printf("strncpy.   -> %s\n", s1);
// 	printf("ft_strncpy -> %s\n", s11);
// 	printf("return value\n");
// 	printf("strncpy.   -> %s\n", re);
// 	printf("ft_strncpy -> %s\n", re1);
// }
