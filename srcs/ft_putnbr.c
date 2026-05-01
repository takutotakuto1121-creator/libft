/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:31 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:48:31 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr (nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

// #include <limits.h>
// int	main(void)
// {
// 	int	min = INT_MIN;
// 	int max = INT_MAX;
// 	int	zero = 0;
// 	ft_putnbr (min);
// 	write (1, "\n", 1);
// 	ft_putnbr (max);
// 	write (1, "\n", 1);
// 	ft_putnbr (zero);
// 	write (1, "\n", 1);
// }
