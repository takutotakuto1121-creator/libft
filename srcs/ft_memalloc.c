/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:55 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:56 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc (size);
	if (!mem)
		return (NULL);
	ft_bzero (mem, size);
	return (mem);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		size = 10;
// 	char	*mem = ft_memalloc (size);
// 	printf ("%s", (char *)mem);
// 	return (0);
// }
