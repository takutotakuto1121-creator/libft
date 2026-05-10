/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 17:24:21 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/10 17:24:31 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c + 'A' - 'a');
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%c %c %c %c", 'a', '4', toupper ('a'), toupper ('4'));
// 	return (0);
// }
