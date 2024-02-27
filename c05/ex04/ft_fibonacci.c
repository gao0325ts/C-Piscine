/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 21:42:33 by stakada           #+#    #+#             */
/*   Updated: 2024/02/19 13:16:38 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int	main(void)
{
	int n;
	n = -5;
	printf("n = %d, result = %d\n", n, ft_fibonacci(n));
	n = 0;
	printf("n = %d, result = %d\n", n, ft_fibonacci(n));
	n = 1;
	printf("n = %d, result = %d\n", n, ft_fibonacci(n));
	n = 2;
	printf("n = %d, result = %d\n", n, ft_fibonacci(n));
	n = 3;
	printf("n = %d, result = %d\n", n, ft_fibonacci(n));

	return (0);
}
*/