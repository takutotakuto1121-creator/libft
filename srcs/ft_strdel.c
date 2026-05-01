/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:53 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:54 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free (*as);
	*as = NULL;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = malloc (100);
// 	printf("--before--\n");
// 	printf("%p\n", str);
// 	ft_strdel (&str);
// 	printf("--after--\n");
// 	printf("%p\n", str);
// 	return (0);
// }
