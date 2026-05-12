/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:02 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:04 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re;

	if (!count || !size)
		return (malloc(0));
	re = malloc(size * count);
	if (!re)
		return (NULL);
	ft_bzero (re, size * count);
	return (re);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	size_t	count = 5;
// 	size_t	size = 1;
// 	char	*re = (char *)calloc(count, size);
// 	size_t	count1 = 5;
// 	size_t	size1 = 1;
// 	char	*re1 = (char *)calloc(count1, size1);
// 	printf("test\n");
// 	printf("calloc.   -> %s\n", re1);
// 	printf("ft_calloc -> %s\n", re);
// }
