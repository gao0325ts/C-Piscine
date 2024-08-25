/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:00:16 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 16:44:05 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *c)
{
	if (*c == 9 || *c == 10 || *c == 11 || *c == 12 || *c == 13 || *c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count++;
		str++;
	}
	if (count % 2 == 1)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int argc, char const *argv[])
{
	int		i;
	char	*s;
	int		n;

	i = 0;
	if (argc == 1)
	{
		s = " ---+--+1234ab567";
		n = ft_atoi(s);
		printf("input  = %s\n", s);
		printf("output = %i\n", n);
	}
	else
	{
		i = ft_atoi((char *)argv[1]);
		printf("input  = %s\n", argv[1]);
		printf("output = %i\n", i);
	}
}
*/