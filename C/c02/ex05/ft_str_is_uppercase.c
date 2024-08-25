/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:53:12 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 02:03:25 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		else
			str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int		result;
	char	*a;
	char	*b;
	char	*c;

	a = "Tokyo";
	result = ft_str_is_uppercase(a);
	printf("input = %s, result = %i\n\n", a, result);
	b = "TOKYO";
	result = ft_str_is_uppercase(b);
	printf("input = %s, result = %i\n\n", b, result);
	c = "";
	result = ft_str_is_uppercase(c);
	printf("input = (empty), result = %i", result);
}
*/