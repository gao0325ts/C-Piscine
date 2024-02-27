/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:53:42 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 14:03:18 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *a / *b;
	*b = n % *b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	printf("x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("div = %d, mod = %d\n", x, y);
	return (0);
}
*/