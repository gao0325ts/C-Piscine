/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 00:13:36 by stakada           #+#    #+#             */
/*   Updated: 2024/02/19 14:50:54 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	mid;
	int	right;
	int	result;

	if (nb == 0 || nb == 1)
		return (nb);
	left = 1;
	right = nb;
	result = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid <= nb / mid)
		{
			result = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	if (result * result == nb)
		return (result);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int num;
	if (argc != 2)
		num = 144;
	else
		num = atoi(argv[1]);
	printf("number = %d\n", num);
	printf("result = %d\n", ft_sqrt(num));
	return (0);
}
*/