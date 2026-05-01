/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:47:25 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:47:26 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(long n)
{
	int	i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_swap(char *s, int size)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = tmp;
		i++;
	}
	return (s);
}

static void	if_minus(char **s, long *nb)
{
	if (*nb < 0)
	{
		**s = '-';
		*nb *= -1;
		(*s)++;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	int		digit;
	char	*s;
	char	*number_head;
	char	*head;

	if (n == 0)
		return ("0");
	nb = n;
	digit = ft_count_digit (nb);
	s = (char *)malloc(sizeof(char) * (digit + 2));
	if (!s)
		return (NULL);
	head = s;
	if_minus (&s, &nb);
	number_head = s;
	while (nb)
	{
		*s++ = (nb % 10) + '0';
		nb /= 10;
	}
	*s = '\0';
	ft_swap (number_head, digit);
	return (head);
}

// #include <stdio.h>
// #include <limits.h>
// int	main(void)
// {
// 	int	min = INT_MIN;
// 	int	max = INT_MAX;
// 	int	zero = 0;
// 	printf("%s\n", ft_itoa (min));
// 	printf("%s\n", ft_itoa (max));
// 	printf("%s\n", ft_itoa (zero));
// 	return (0);
// }
