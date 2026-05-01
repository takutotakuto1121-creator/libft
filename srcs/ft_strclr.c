/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:45 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:46 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	while (*s)
		*s++ = '\0';
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "hello";
// 	printf("--before--\n");
// 	printf("%s\n", s);
// 	ft_strclr (s);
// 	printf("--after--\n");
// 	printf("%s\n", s);
// }
