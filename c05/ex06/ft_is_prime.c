/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:35:18 by stakada           #+#    #+#             */
/*   Updated: 2024/02/19 14:50:46 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	num;

	if (argc != 2)
		num = 19;
	else
		num = atoi(argv[1]);
	printf("number = %d\n", num);
	printf("result = %d\n", ft_is_prime(num));
	return (0);
}
*/