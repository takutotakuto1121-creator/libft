/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:56 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:56 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*head;

	s2 = (char *)malloc(sizeof(char) * (ft_strlen (s1) + 1));
	if (!s2)
		return (NULL);
	head = s2;
	while (*s1)
		*s2++ = *s1++;
	*s2 = '\0';
	return (head);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s1 = "hello world!";
// 	char	*s2 = strdup (s1);
// 	char	*s3 = ft_strdup (s1);
// 	printf("test\n");
// 	printf("strdup    -> %s\n", s2);
// 	printf("ft_strdup -> %s\n", s3);
// 	return (0);
// }
