/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:56:07 by stakada           #+#    #+#             */
/*   Updated: 2024/02/21 15:19:07 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base_from(char *s);
int		ft_char_to_digit(char c, char *base);
int		ft_atoi_base(char *nbr, char *base, int *number);
int		ft_check_base_to(char *s);
char	*ft_change_nbr_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str++ != '\0')
		num++;
	return (num);
}

int	ft_check_base_from(char *s)
{
	char	*s_copy;

	s_copy = s;
	while (*s)
	{
		if (*s == '+' || *s == '-' || (*s >= 9 && *s <= 13) || *s == 32)
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

int	ft_atoi_base(char *nbr, char *base, int *number)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	if (ft_strlen(base) <= 1 || ft_check_base_from(base) != 0)
		return (1);
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
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
		result = result * ft_strlen(base) + (ft_char_to_digit(*nbr, base));
		nbr++;
	}
	*number = sign * result;
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	number = 0;
	result = NULL;
	if (ft_atoi_base(nbr, base_from, &number))
		return (NULL);
	result = ft_change_nbr_base(number, base_to);
	if (result == NULL)
		return (NULL);
	return (result);
}

/*
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argc, char **argv)
{
	char *ans;
	if (argc == 4)
	{
		ans = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("from_base: %s\n", argv[2]);
		printf("num: %s\n", argv[1]);
		printf("to_base: %s\n", argv[3]);
		printf("ans: %s\n", ans);
	}
	else
	{
		ans = ft_convert_base("-256", "0123456789", "0123456789abcdef");
		printf("from_base: 0123456789\n");
		printf("num: -256\n");
		printf("to_base: 0123456789abcdef\n");
		printf("ans: %s\n", ans); // 100が出力されればOK
	}
}
*/