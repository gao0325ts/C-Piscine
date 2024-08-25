/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:51:37 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 02:02:44 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	result = ft_str_is_lowercase(a);
	printf("input = %s, result = %i\n\n", a, result);
	b = "tokyo";
	result = ft_str_is_lowercase(b);
	printf("input = %s, result = %i\n\n", b, result);
	c = "";
	result = ft_str_is_lowercase(c);
	printf("input = (empty), result = %i\n", result);
}
*/