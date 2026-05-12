/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:46:50 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 22:46:27 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f'
		|| *str == '\r')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9' && *str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*str = "  \n -2147483648int_min";
// 	char	*str1 = "2147483647int_max";
// 	char	*str3 = "0";
// 	char	*str4 = "+578";
// 	char	*str5 = "+53-3";
// 	int		min = atoi (str);
// 	int		minf = ft_atoi (str);
// 	int		max = atoi (str1);
// 	int		maxf = ft_atoi (str1);
// 	int		zero = atoi (str3);
// 	int		zerof = ft_atoi (str3);
// 	int		plus = atoi (str4);
// 	int		plusf = ft_atoi (str4);
// 	int		plus1 = atoi (str5);
// 	int		plusf1 = ft_atoi (str5);
// 	printf("test:int_min\n");
// 	printf("atoi.   -> %d\n", min);
// 	printf("ft_atoi -> %d\n", minf);
// 	printf("test:int_max\n");
// 	printf("atoi.   -> %d\n", max);
// 	printf("ft_atoi -> %d\n", maxf);
// 	printf("test:zero\n");
// 	printf("atoi.   -> %d\n", zero);
// 	printf("ft_atoi -> %d\n", zerof);
// 	printf("test:plus\n");
// 	printf("atoi.   -> %d\n", plus);
// 	printf("ft_atoi -> %d\n", plusf);
// 	printf("test:plus1\n");
// 	printf("atoi.   -> %d\n", plus1);
// 	printf("ft_atoi -> %d\n", plusf1);
// }
