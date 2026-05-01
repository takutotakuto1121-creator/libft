/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:22 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:23 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return (32 <= uc && uc <= 126);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int	a = 40;
// 	int	b = 200;
// 	printf("isprint -> %d\nft_isprint -> %d\n", isprint(a), ft_isprint (a));
// 	printf("isprint -> %d\nft_isprint -> %d\n", isprint (b), ft_isprint (b));
// }
