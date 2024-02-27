/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakami <yakami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:57:41 by yakami            #+#    #+#             */
/*   Updated: 2024/02/25 17:48:45 by yakami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned long long	ft_atoi(char *str)
{
	unsigned long long	result;
	long				n_count;

	n_count = 0;
	result = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str == '-')
	{
		n_count++;
		str++;
	}
	if (*str == '-')
		str++;
	if (2 <= n_count)
		return (0);
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (n_count % 2 == 1)
		return (-result);
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char a[] = "--dshh1234ab567";
// 	char b[] = "   ++23264 sjd1234ab567";
//     char c[] = "    23264 sjd1234ab567";
//     char d[] = "0";

// 	// atoi test case
// 	printf("%d\n", ft_atoi(a));
// 	printf("%d\n", atoi(a));

// 	printf("%d\n", ft_atoi(b));
// 	printf("%d\n", atoi(b));

//     printf("%d\n", ft_atoi(c));
// 	printf("%d\n", atoi(c));

//     printf("%d\n", ft_atoi(d));
// 	printf("%d\n", atoi(d));
// }