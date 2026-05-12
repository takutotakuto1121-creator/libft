/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:49 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 02:01:45 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	if (!s)
		return (NULL);
	if (!*s)
		return ((char *)s);
	i = 0;
	end = 0;
	while (is_set (s[i], set) && s[i])
		i++;
	start = i;
	while (s[end])
		end++;
	end --;
	while (is_set (s[end], set) && end > start)
		end--;
	str = ft_substr (s, start, end - start + 1);
	if (!str)
		return (NULL);
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*set = "+*";
// 	char	*s = "+*hello+*+";
// 	char	*str = ft_strtrim (s, set);
// 	printf("%s\n->\n", s);
// 	printf("%s\n", str);
// }
