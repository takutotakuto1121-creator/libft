/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:49:03 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:49:03 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	a(unsigned int i, char *s)
// {
// 	if (i % 2 == 0)
// 		*s += 'A' - 'a';
// }

// int	main(void)
// {
// 	char	s[] = "hello";
// 	printf("--before--\n");
// 	printf("%s\n", s);
// 	ft_striteri (s, &a);
// 	printf("--after--\n");
// 	printf("%s\n", s);
// }
