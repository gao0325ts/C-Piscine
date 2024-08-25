/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 03:04:30 by stakada           #+#    #+#             */
/*   Updated: 2024/02/11 18:32:01 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	turn_to_char(int x)
{
	char	c[11];
	int		i;

	i = 0;
	while (x != 0)
	{
		c[i] = x % 10 + '0';
		x /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &c[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		turn_to_char(nb);
	}
	else
	{
		turn_to_char(nb);
	}
}
