/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:25 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 22:20:03 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			return ((int)((unsigned char)*s1 - (unsigned char)*s2));
		s1++;
		s2++;
		n--;
	}
	if (*s1 != *s2 && n)
		return ((int)((unsigned char)*s1 - (unsigned char)*s2));
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s1 = "hello";
// 	char	*s2 = "hsllo";
// 	int		n = 5;
// 	int		re = strncmp (s1, s2, n);
// 	int		re1 = ft_strncmp (s1, s2, n);
// 	printf("test1: find difference\n");
// 	printf("srcmp.    -> %d\n", re);
// 	printf("ft_strcmp -> %d\n", re1);

// 	char	*s3 = "hello";
// 	char	*s4 = "hellc";
// 	int		len1 = 5;
// 	int		re3 = strncmp (s3, s4, len1);
// 	int		re4 = ft_strncmp (s3, s4, len1);
// 	printf("test2: find difference in the final literal\n");
// 	printf("srcmp.    -> %d\n", re3);
// 	printf("ft_strcmp -> %d\n", re4);

// 	char	*s5 = "hello";
// 	char	*s6 = "helloo";
// 	int		len2 = 6;
// 	int		re5 = strncmp (s5, s6, len2);
// 	int		re6 = ft_strncmp (s5, s6, len2);
// 	printf("test2:s2 exceeds the length of s1\n");
// 	printf("srcmp.    -> %d\n", re5);
// 	printf("ft_strcmp -> %d\n", re6);
// 	return (0);
// }
