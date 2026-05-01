/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:24 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:54:08 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr (s);
	ft_putchar ('\n');
}

// int	main(void)
// {
// 	char *s = "hello";
// 	ft_putendl (s);
// 	return (0);
// }
