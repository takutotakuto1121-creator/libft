/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:36 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:36 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (ft_strncmp (s1, s2, n) == 0)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1 = "hello";
// 	char	*s2 = "helloo";
// 	int		n1 = 5;
// 	int		n2 = 6;
// 	printf("identical -> %d\n", ft_strnequ (s1, s2, n1));
// 	printf("otherwise -> %d\n", ft_strnequ (s1, s2, n2));
// 	return (0);
// }
