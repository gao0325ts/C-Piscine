/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:26:32 by stakada           #+#    #+#             */
/*   Updated: 2024/02/19 16:39:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_queen_positions(int queen_positions[])
{
	int		i;
	char	queen_position;

	i = 0;
	while (i < 10)
	{
		queen_position = queen_positions[i] + '0';
		write(1, &queen_position, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_valid(int queen_positions[], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (queen_positions[i] == col || queen_positions[i] - col == row - i
			|| col - queen_positions[i] == row - i)
			return (0);
		i++;
	}
	return (1);
}

int	find_queen_patterns(int queen_positions[], int row, int *total_patterns)
{
	int	col;

	if (row == 10)
	{
		print_queen_positions(queen_positions);
		(*total_patterns)++;
		return (1);
	}
	col = 0;
	while (col < 10)
	{
		if (is_valid(queen_positions, row, col))
		{
			queen_positions[row] = col;
			find_queen_patterns(queen_positions, row + 1, total_patterns);
		}
		col++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int		queen_positions[10];
	int		total_patterns;

	total_patterns = 0;
	find_queen_patterns(queen_positions, 0, &total_patterns);
	return (total_patterns);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = ft_ten_queens_puzzle();
	printf("%d\n", n);
	return (0);
}
*/