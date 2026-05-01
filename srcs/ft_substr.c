/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:52 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/02 01:52:03 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subtring;
	char	*head;

	if (start > (ft_strlen (s) + 1))
		start = ft_strlen (s) + 1;
	if (start + len > (ft_strlen (s) + 1))
		len = ft_strlen (s) + 1 - start;
	if (!s)
		return (NULL);
	subtring = (char *)malloc(sizeof(char) * (len + 1));
	if (!subtring)
		return (NULL);
	head = subtring;
	while (start--)
		s++;
	while (len--)
		*subtring++ = *s++;
	*subtring = '\0';
	return (head);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s = "hello world";
// 	int	start = 6;
// 	int	len = 5;
// 	char	*sub = ft_substr (s, start, len);
// 	printf("%s\n", sub);
// }
