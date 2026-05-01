/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:27 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 22:56:42 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr_fd (nb / 10, fd);
	write (fd, &"0123456789"[nb % 10], 1);
}

// #include <limits.h>
// int	main(void)
// {
// 	int	min = INT_MIN;
// 	int max = INT_MAX;
// 	int	zero = 0;
// 	int	fd = 2;
// 	ft_putnbr_fd (min, fd);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd (max, fd);
// 	write (1, "\n", 1);
// 	ft_putnbr_fd (zero, fd);
// 	write (1, "\n", 1);
// }
