/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:40 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:41 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*head;

	head = s1;
	while (*s1)
		s1++;
	while (*s2)
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
// 	char	*re = strcat (s1, s2);
// 	char	*re1 = ft_strcat (s11, s2);
// 	printf("test\n");
// 	printf("strcpy.   -> %s\n", s1);
// 	printf("ft_strcpy -> %s\n", s11);
// 	printf("return value\n");
// 	printf("strcpy.   -> %s\n", re);
// 	printf("ft_strcpy -> %s\n", re1);
// }
