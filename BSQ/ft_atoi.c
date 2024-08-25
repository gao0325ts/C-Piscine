/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 00:43:14 by stakada           #+#    #+#             */
/*   Updated: 2024/02/28 00:43:17 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (-1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	num;

	while (ft_isspace(*str))
		str++;
	count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			count++;
	}
	if (count % 2 == 0)
		sign = 1;
	else
		sign = -1;
	num = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		num = num * 10 + (*str - '0');
		str++;
	}
	return (sign * num);
}
