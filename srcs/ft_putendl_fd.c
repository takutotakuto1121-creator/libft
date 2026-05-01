/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:22 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:22 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd (s, fd);
	write (fd, "\n", 1);
}

// int	main(void)
// {
// 	char *s = "hello";
// 	int	fd = 1;
// 	ft_putendl_fd (s, fd);
// 	return (0);
// }
