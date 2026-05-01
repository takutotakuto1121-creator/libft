/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:41 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 01:26:29 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_plus(const char **h_haystack, const char **h_needle,
						size_t *h_len)
{
	(*h_haystack)++;
	(*h_needle)++;
	(*h_len)--;
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h_haystack;
	const char	*h_needle;
	size_t		h_len;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			h_haystack = haystack;
			h_needle = needle;
			h_len = len + 1;
			while (*h_haystack && *h_needle
				&& *h_haystack == *h_needle && h_len)
				ft_plus (&h_haystack, &h_needle, &h_len);
			if (!*h_needle)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
// #ifdef __linux__
// # include <bsd/string.h>
// #else
// # include <string.h>
// #endif
// #include <stdio.h>
// int	main(void)
// {
// 	char	*haystack = "hello world";
// 	char	*needle = "world";
// 	int		len = 11;
// 	char	*re = strnstr (haystack, needle, len);
// 	char	*ref = ft_strnstr (haystack, needle, len);
// 	printf("test:find needle\n");
// 	printf("strnstr    -> %s\n", re);
// 	printf("ft_strnstr -> %s\n\n", ref);

// 	char	*haystack1 = "hello world";
// 	char	*needle1 = "world";
// 	int		len1 = 10;
// 	char	*re1 = strnstr (haystack1, needle1, len1);
// 	char	*ref1 = ft_strnstr (haystack1, needle1, len1);
// 	printf("test:don't find needle\n");
// 	printf("strnstr    -> %s\n", re1);
// 	printf("ft_strnstr -> %s\n\n", ref1);

// 	char	*haystack2 = "hello world";
// 	char	*needle2 = "";
// 	int		len2 = 11;
// 	char	*re2 = strnstr (haystack2, needle2, len2);
// 	char	*ref2 = ft_strnstr (haystack2, needle2, len2);
// 	printf("test:needle is null\n");
// 	printf("strnstr    -> %s\n", re2);
// 	printf("ft_strnstr -> %s\n\n", ref2);

// 	char	*haystack3 = "";
// 	char	*needle3 = "hello";
// 	int		len3 = 1;
// 	char	*re3 = strnstr (haystack3, needle3, len3);
// 	char	*ref3 = ft_strnstr (haystack3, needle3, len3);
// 	printf("test:haystack is null\n");
// 	printf("strnstr    -> %s\n", re3);
// 	printf("ft_strnstr -> %s\n\n", ref3);
// }
