/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:03:46 by yakami            #+#    #+#             */
/*   Updated: 2024/02/25 17:14:06 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_checknumber(char *str)
{
	int				i;
	unsigned int	num_after_atoi;
	unsigned int	max_unsigned_int;

	i = 0;
	max_unsigned_int = 4294967295;
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	num_after_atoi = ft_atoi(str);
	if (!(ft_atoi(str) <= max_unsigned_int) || i >= 11)
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	a[] = "4294967295";
// 	char	b[] = "42949672968";
// 	char	c[] = "    23264 sjd1234ab567";
// 	char	d[] = "0";

// 	// atoi test case
// 	printf("%d\n", ft_checknumber(b));
// 	// printf("%ld\n", atoi(a));
// 	// printf("%ld\n", ft_atoi(b));
// 	// // printf("%ld\n", atoi(b));
// 	// printf("%ld\n", ft_atoi(c));
// 	// // printf("%ld\n", atoi(c));
// 	// printf("%ld\n", ft_atoi(d));
// 	// printf("%ld\n", atoi(d));
// 	// check numeric
// 	// printf("check number %d\n",ft_checknumber("1234")); // 1
// 	// printf("check number %d\n",ft_checknumber("0123456789")); // 1
// 	// printf("check number %d\n",ft_checknumber("1234")); // 1
// 	// printf("check number %d\n",ft_checknumber("0")); // 1
// 	// printf("check number %d\n",ft_checknumber("abcde")); // 0
// 	// printf("check number %d\n",ft_checknumber("12d34")); // 0
// 	// printf("check number %d\n",ft_checknumber("  12d34")); // 0
// 	// printf("check number %d\n",ft_checknumber("-1234")); // 0
// 	// printf("check number %d\n",ft_checknumber("+1234")); // 0
// 	// printf("check number %d\n",ft_checknumber("0.125")); // 0
// }
