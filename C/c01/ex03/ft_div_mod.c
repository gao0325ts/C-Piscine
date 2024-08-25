/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:49:09 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 12:48:49 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	int d, m;
	ft_div_mod(x, y, &d, &m);
	printf("x = %d, y = %d\n", x, y);
	printf("div = %d, mod = %d\n", d, m);
	return (0);
}
*/
