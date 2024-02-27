/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:57:56 by stakada           #+#    #+#             */
/*   Updated: 2024/02/15 08:28:45 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = '0';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s", "input = -2147483648\n");
	ft_putnbr(-2147483648);
	printf("%s", "\ninput = -4567\n");
	ft_putnbr(-4567);
	printf("%s", "\ninput = 0\n");
	ft_putnbr(0);
	printf("%s", "\ninput = 9876\n");
	ft_putnbr(9876);
	printf("%s", "\ninput = 2147483647\n");
	ft_putnbr(2147483647);
	return (0);
}
*/