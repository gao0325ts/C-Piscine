/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:34:11 by stakada           #+#    #+#             */
/*   Updated: 2024/02/18 17:18:58 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve(int views[4][4]);

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		num++;
		str++;
	}
	return (num);
}

int	char_to_int(char c)
{
	if (c >= '1' && c <= '4')
		return (c - '0');
	else if (c == ' ')
		return (0);
	else
		return (-1);
}

int	into_argument(char *input, int views[4][4])
{
	int	i;
	int	j;
	int	value;

	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 0 && input[i] != ' ')
		{
			value = char_to_int(input[i]);
			if (value == -1)
				return (1);
			views[j / 4][j % 4] = value;
			j++;
			i++;
		}
		else if (i % 2 == 1 && input[i] == ' ')
			i++;
		else
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	views[4][4];
	int	i;

	i = 0;
	if (argc == 2 && ft_strlen(argv[1]) == 31)
	{
		if (into_argument(argv[1], views) != 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		solve(views);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
