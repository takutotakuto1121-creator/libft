/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:47 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:47 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*h_haystack;
	const char	*h_needle;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			h_haystack = haystack;
			h_needle = needle;
			while (*h_haystack && *h_needle && *h_haystack == *h_needle)
			{
				h_haystack++;
				h_needle++;
			}
			if (!*h_needle)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*haystack = "hello world";
// 	char	*needle = "world";
// 	char	*re = strstr (haystack, needle);
// 	char	*ref = ft_strstr (haystack, needle);
// 	printf("test:find needle\n");
// 	printf("strstr    -> %s\n", re);
// 	printf("ft_strstr -> %s\n\n", ref);

// 	char	*haystack1 = "hello world";
// 	char	*needle1 = "wx";
// 	char	*re1 = strstr (haystack1, needle1);
// 	char	*ref1 = ft_strstr (haystack1, needle1);
// 	printf("test:don't find needle\n");
// 	printf("strstr    -> %s\n", re1);
// 	printf("ft_strstr -> %s\n\n", ref1);

// 	char	*haystack2 = "hello world";
// 	char	*needle2 = "";
// 	char	*re2 = strstr (haystack2, needle2);
// 	char	*ref2 = ft_strstr (haystack2, needle2);
// 	printf("test:needle is null\n");
// 	printf("strstr    -> %s\n", re2);
// 	printf("ft_strstr -> %s\n\n", ref2);

// 	char	*haystack3 = "";
// 	char	*needle3 = "hello";
// 	char	*re3 = strstr (haystack3, needle3);
// 	char	*ref3 = ft_strstr (haystack3, needle3);
// 	printf("test:haystack is null\n");
// 	printf("strstr    -> %s\n", re3);
// 	printf("ft_strstr -> %s\n\n", ref3);
// }
