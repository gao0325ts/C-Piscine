/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:30:27 by stakada           #+#    #+#             */
/*   Updated: 2024/02/27 02:11:18 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

void	put_division_error(void)
{
	char	*str;
	int		i;

	str = "Stop : division by zero";
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	put_mod_error(void)
{
	char	*str;
	int		i;

	str = "Stop : modulo by zero";
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		return (0);
	}
	else
	{
		if (*argv[2] == '+')
			ft_add(ft_atoi(argv[1]), ft_atoi(argv[3]));
		else if (*argv[2] == '-')
			ft_subtract(ft_atoi(argv[1]), ft_atoi(argv[3]));
		else if (*argv[2] == '/')
			ft_divide(ft_atoi(argv[1]), ft_atoi(argv[3]));
		else if (*argv[2] == '*')
			ft_multiply(ft_atoi(argv[1]), ft_atoi(argv[3]));
		else if (*argv[2] == '%')
			ft_mod(ft_atoi(argv[1]), ft_atoi(argv[3]));
		else
		{
			write(1, "0", 1);
			write(1, "\n", 1);
			return (0);
		}
		write(1, "\n", 1);
	}
	return (0);
}
