/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:13 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:14 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s = "hello";
// 	char	*s1 = "hello";
// 	int		len = strlen (s);
// 	int		len1 = ft_strlen (s1);
// 	printf("test\n");
// 	printf("strlen   -> %d\n", len);
// 	printf("ft_stlen -> %d\n", len1);
// }
