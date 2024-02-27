/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caculation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 00:20:12 by stakada           #+#    #+#             */
/*   Updated: 2024/02/26 22:54:44 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_add(int x, int y)
{
	ft_putnbr(x + y);
}

void	ft_subtract(int x, int y)
{
	ft_putnbr(x - y);
}

void	ft_divide(int x, int y)
{
	if (y == 0)
		put_division_error();
	else
		ft_putnbr(x / y);
}

void	ft_multiply(int x, int y)
{
	ft_putnbr(x * y);
}

void	ft_mod(int x, int y)
{
	if (y == 0)
		put_mod_error();
	else
		ft_putnbr(x % y);
}
