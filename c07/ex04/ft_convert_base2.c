/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:56:25 by stakada           #+#    #+#             */
/*   Updated: 2024/02/21 14:56:16 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base_from(char *s);
int	ft_char_to_digit(char c, char *base);
int	ft_atoi_base(char *nbr, char *base, int *number);
int	ft_check_base_to(char *s);

int	ft_check_base_to(char *s)
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

char	*reverse_string(char *str, int length)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

void	itoa_base_helper(long n, char *base, char *result, int *i)
{
	int	base_len;
	int	rem;

	rem = 0;
	base_len = ft_strlen(base);
	while (n > 0)
	{
		rem = n % base_len;
		result[(*i)++] = base[rem];
		n /= base_len;
	}
}

char	*itoa_base(long n, char *base, char *result)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		result[i++] = base[0];
		result[i] = '\0';
		return (result);
	}
	if (n < 0)
	{
		n = -n;
		itoa_base_helper(n, base, result, &i);
		result[i++] = '-';
	}
	else
		itoa_base_helper(n, base, result, &i);
	result[i] = '\0';
	return (reverse_string(result, i));
}

char	*ft_change_nbr_base(int nbr, char *base)
{
	long	n;
	char	*result;

	result = (char *)malloc(33);
	n = nbr;
	if (ft_strlen(base) <= 1 || ft_check_base_to(base) != 0)
	{
		free(result);
		return (NULL);
	}
	itoa_base(n, base, result);
	return (result);
}
