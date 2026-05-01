/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:00 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:01 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
		f (s++);
}

// #include <stdio.h>

// void	a(char *s)
// {
// 	*s += 'A' - 'a';
// }

// int	main(void)
// {
// 	char	s[] = "hello";
// 	printf("--before--\n");
// 	printf("%s\n", s);
// 	ft_striter (s, &a);
// 	printf("--after--\n");
// 	printf("%s\n", s);
// 	return (0);
// }
