/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:28:09 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/08 17:28:11 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	toupper(int c)
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
