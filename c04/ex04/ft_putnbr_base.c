/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:43:09 by stakada           #+#    #+#             */
/*   Updated: 2024/02/15 13:26:48 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str++ != '\0')
		num++;
	return (num);
}

int	ft_check_base(char *s)
{
	char	*s_copy;

	s_copy = s;
	while (*s)
	{
		if (*s == '+' || *s == '-')
			return (1);
		s_copy = s + 1;
		while (*s_copy++)
		{
			if (*s == *s_copy)
				return (1);
		}
		s++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_len;
	char	c;

	n = nbr;
	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_check_base(base) != 0)
		return ;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	c = base[n % base_len];
	write(1, &c, 1);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(int argc, char const *argv[])
{
	int n;
	char *base;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		ft_putnbr_base(n, (char *)argv[2]);
		printf("\nn = %i, base = %s\n", n, argv[2]);
	}
	else
	{
		n = 10;
		base = "0123456789ABC";
		ft_putnbr_base(n, base);
		printf("\nn = %i, base = %s\n", n, base);
	}
}
*/