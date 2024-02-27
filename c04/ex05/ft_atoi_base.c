/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:56:45 by stakada           #+#    #+#             */
/*   Updated: 2024/02/15 13:25:15 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isspace(char *c)
{
	if ((*c >= 9 && *c <= 13) || *c == 32)
		return (1);
	else
		return (0);
}

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
		if (*s == '+' || *s == '-' || ft_isspace(s) == 1)
			return (1);
		s_copy = s + 1;
		while (*s_copy)
		{
			if (*s == *s_copy)
				return (1);
			s_copy++;
		}
		s++;
	}
	return (0);
}

int	ft_char_to_digit(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	base_len;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_check_base(base) != 0)
		return (0);
	while (ft_isspace(nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr)
	{
		if ((ft_char_to_digit(*nbr, base)) == -1)
			break ;
		result = result * base_len + (ft_char_to_digit(*nbr, base));
		nbr++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int	a = 0;
	int b = 0;
	char *n;
	char *base;
	if (argc == 3)
	{
		a = ft_atoi_base((char *)argv[1], (char *)argv[2]);
		printf("%d", a);
		printf("\nn = %s, base = %s\n", argv[1], argv[2]);
	}
	else
	{
		n = " -++-Aab6";
		base = "0123456789ABC";
		b = ft_atoi_base(n, base);
		printf("%d", b);
		printf("\nn = %s, base = %s\n", n, base);
	}
}
*/