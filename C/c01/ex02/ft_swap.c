/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:46:19 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 12:43:05 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("Before swapping: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After swapping: x = %d, y = %d\n", x, y);
	return (0);
}
*/