/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 23:43:10 by stakada           #+#    #+#             */
/*   Updated: 2024/02/20 04:00:05 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combn_recursive(int n, int start, int curr_digit, int *buffer)
{
	int	i;

	if (curr_digit == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar('0' + buffer[i]);
			i++;
		}
		if (buffer[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = start;
	while (i <= 9)
	{
		buffer[curr_digit] = i;
		print_combn_recursive(n, i + 1, curr_digit + 1, buffer);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	buffer[10];

	if (n <= 0 || n >= 10)
		return ;
	print_combn_recursive(n, 0, 0, buffer);
}

/*
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
*/
