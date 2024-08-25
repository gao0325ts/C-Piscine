/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:03:43 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 02:00:44 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z' && *str < 'a') || (*str > 'z'))
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

	result = -1;
	a = "Hello World!";
	result = ft_str_is_alpha(a);
	printf("input = %s, result = %i\n\n", a, result);
	b = "HelloWorld";
	result = ft_str_is_alpha(b);
	printf("input = %s, result = %i\n\n", b, result);
	c = "";
	result = ft_str_is_alpha(c);
	printf("input = (empty), result = %i\n", result);
}
*/