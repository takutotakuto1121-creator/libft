/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:38 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:39 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(size);
	if (!str)
		return (NULL);
	ft_bzero (str, size);
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		size = 10;
// 	char	*str = ft_strnew (size);
// 	printf("%p\n", str);
// }
