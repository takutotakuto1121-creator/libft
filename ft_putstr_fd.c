/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:33 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:33 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write (fd, s, i);
}

// int	main(void)
// {
// 	char	*s = "hello";
// 	int		fd = 1;
// 	ft_putstr_fd (s, fd);
// 	return (0);
// }
