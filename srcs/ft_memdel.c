/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:08 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:08 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap == NULL || *ap == NULL)
		return ;
	free (*ap);
	*ap = NULL;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*ap1 = malloc (100);
// 	printf("--before--\n");
// 	printf("%p\n", ap1);
// 	char	**ap = &ap1;
// 	ft_memdel ((void **)ap);
// 	printf("--after--\n");
// 	printf("%p\n", ap1);
// 	return (0);
// }
