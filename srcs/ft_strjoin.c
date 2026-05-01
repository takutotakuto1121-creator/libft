/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:06 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:06 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*s3;
	char	*head;

	len = ft_strlen (s1) + ft_strlen (s2);
	s3 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (NULL);
	head = s3;
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (head);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1 = "hello";
// 	char	*s2 = "world";
// 	char	*s3 = ft_strjoin (s1, s2);
// 	printf("%s\n", s3);
// }
