/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:54:43 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 04:58:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int result;
	char *a;
	char *b;
	char *c;

	a = "To\nkyo";
	result = ft_str_is_printable(a);
	printf("input = %s, result = %i\n\n", a, result);
	b = "tokyo";
	result = ft_str_is_printable(b);
	printf("input = %s, result = %i\n\n", b, result);
	c = "";
	result = ft_str_is_printable(c);
	printf("input = (empty), result = %i", result);
}
*/