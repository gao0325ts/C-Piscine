/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:57:56 by stakada           #+#    #+#             */
/*   Updated: 2024/02/19 16:02:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power == 1)
	{
		result = result * nb;
		return (result);
	}
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/*
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int num;
	int power;
	if (argc != 3)
	{
		num = 6;
		power = 0;
	}
	else
	{
		num = atoi(argv[1]);
		power = atoi(argv[2]);
	}
	printf("number = %d, power = %d\n", num, power);
	printf("result = %d\n", ft_recursive_power(num, power));
	return (0);
}
*/