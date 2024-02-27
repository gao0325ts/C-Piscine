/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:38:53 by stakada           #+#    #+#             */
/*   Updated: 2024/02/18 17:26:24 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_answer(int boxes[4][4]);
int		find_answer(int boxes[4][4], int i, int j, int views[4][4]);
int		is_valid(int boxes[4][4], int i, int j, int num);
int		check(int boxes[4][4], int views[4][4]);

void	solve(int views[4][4])
{
	int	boxes[4][4];
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			boxes[i][j] = 0;
	}
	if (find_answer(boxes, 0, 0, views))
		print_answer(boxes);
	else
		write(2, "Error\n", 6);
}

int	find_answer(int boxes[4][4], int i, int j, int views[4][4])
{
	int	num;

	num = 0;
	if (j == 4 && i == 4)
	{
		if (check(boxes, views))
			return (1);
		return (0);
	}
	else if (j == 4)
		return (find_answer(boxes, i + 1, 0, views));
	if (boxes[i][j] != 0)
		return (find_answer(boxes, i, j + 1, views));
	while (++num <= 4)
	{
		if (is_valid(boxes, i, j, num))
		{
			boxes[i][j] = num;
			if (find_answer(boxes, i, j + 1, views))
				return (1);
			boxes[i][j] = 0;
		}
	}
	return (0);
}

void	print_answer(int boxes[4][4])
{
	int		i;
	int		j;
	char	ans;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ans = boxes[i][j] + '0';
			write(1, &ans, 1);
			if (j < 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int	is_valid(int boxes[4][4], int i, int j, int num)
{
	int	n;

	n = -1;
	while (++n < 4)
	{
		if (boxes[i][n] == num || boxes[n][j] == num)
			return (0);
	}
	return (1);
}
