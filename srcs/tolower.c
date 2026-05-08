/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:28:06 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/08 17:28:12 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%c %c %c %c", 'A', '4', tolower ('A'), tolower ('4'));
// 	return (0);
// }
