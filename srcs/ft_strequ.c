/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:58 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:58 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (0);
	return (1);
}

	// #include <stdio.h>
	// int	main(void)
	// {
	// 	char	*s1 = "hello";
	// 	char	*s2 = "helloo";
	// 	char	*s3 = "hello";
	// 	printf("identical -> %d\n", ft_strequ (s1, s3));
	// 	printf("otherwise -> %d\n", ft_strequ (s1, s2));
	// 	return (0);
	// }
