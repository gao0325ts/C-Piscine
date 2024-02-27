/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:37:25 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 02:01:39 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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

	a = "42Tokyo";
	result = ft_str_is_numeric(a);
	printf("input = %s, result = %i\n\n", a, result);
	b = "42";
	result = ft_str_is_numeric(b);
	printf("input = %s, result = %i\n\n", b, result);
	c = "";
	result = ft_str_is_numeric(c);
	printf("input = (empty), result = %i\n", result);
}
*/