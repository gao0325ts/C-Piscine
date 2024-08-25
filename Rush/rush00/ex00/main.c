/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:13:50 by stakada           #+#    #+#             */
/*   Updated: 2024/02/11 18:49:59 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_to_int(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3 || (ft_str_is_numeric(argv[1]) == 0
			|| ft_str_is_numeric(argv[2]) == 0))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	x = ft_to_int(argv[1]);
	y = ft_to_int(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	rush(x, y);
	return (0);
}
