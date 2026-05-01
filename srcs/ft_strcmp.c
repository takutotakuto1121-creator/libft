/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:48 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:48 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((int)((unsigned char)*s1 - (unsigned char)*s2));
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return ((int)((unsigned char)*s1 - (unsigned char)*s2));
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s1 = "hello";
// 	char	*s2 = "heslo";
// 	int		re = strcmp (s1, s2);
// 	int		re1 = ft_strcmp (s1, s2);
// 	printf("test1: find difference\n");
// 	printf("srcmp.    -> %d\n", re);
// 	printf("ft_strcmp -> %d\n", re1);

// 	char	*s3 = "hello";
// 	char	*s4 = "hellc";
// 	int		re3 = strcmp (s3, s4);
// 	int		re4 = ft_strcmp (s3, s4);
// 	printf("test2: find difference in the final literal\n");
// 	printf("srcmp.    -> %d\n", re3);
// 	printf("ft_strcmp -> %d\n", re4);

// 	char	*s5 = "hello";
// 	char	*s6 = "helloo";
// 	int		re5 = strcmp (s5, s6);
// 	int		re6 = ft_strcmp (s5, s6);
// 	printf("test2:s2 exceeds the length of s1\n");
// 	printf("srcmp.    -> %d\n", re5);
// 	printf("ft_strcmp -> %d\n", re6);
// 	return (0);
// }
