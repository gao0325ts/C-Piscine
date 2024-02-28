/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_answer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:23:33 by stakada           #+#    #+#             */
/*   Updated: 2024/02/28 23:09:43 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	initialize_map(int **caculation, t_map arg, char **row)
{
	int	i;
	int	j;

	i = 0;
	while (i < arrlen(row) - 1)
	{
		j = 0;
		while (j < ft_strlen(arg.point[i]))
		{
			caculation[i][j] = -1;
			j++;
		}
		i++;
	}
	set_obstacle(caculation, arg, row);
}

void	set_obstacle(int **caculation, t_map arg, char **row)
{
	int	i;
	int	j;

	i = 0;
	while (i < arrlen(row) - 1)
	{
		j = 0;
		while (j < ft_strlen(arg.point[i]))
		{
			if (arg.point[i][j] == arg.obstacle_char)
				caculation[i][j] = 0;
			j++;
		}
		i++;
	}
	fill_edges_with_ones(caculation, arg, row);
}

void	fill_edges_with_ones(int **caculation, t_map arg, char **row)
{
	int	i;
	int	j;

	i = 0;
	while (i < arrlen(row) - 1)
	{
		if (caculation[i][0] != 0)
			caculation[i][0] = 1;
		i++;
	}
	i = 0;
	while (i < arrlen(row) - 1)
	{
		j = 0;
		while (j < ft_strlen(arg.point[i]))
		{
			if (caculation[0][j] != 0)
				caculation[0][j] = 1;
			j++;
		}
		i++;
	}
}

int	find_min(int left_top, int top, int left)
{
	int	min;

	min = left_top;
	if (top < min)
		min = top;
	if (left < min)
		min = left;
	return (min);
}

t_result	find_answer(int **caculation, t_map arg, t_result first_answer,
		char **row)
{
	int	i;
	int	j;

	i = 1;
	while (i < arrlen(row) - 1)
	{
		j = 1;
		while (j < ft_strlen(arg.point[i]))
		{
			if (caculation[i][j] != 0)
			{
				caculation[i][j] = find_min(caculation[i - 1][j - 1],
						caculation[i - 1][j], caculation[i][j - 1]) + 1;
				if (first_answer.max < caculation[i][j])
				{
					first_answer.max = caculation[i][j];
					first_answer.row = i;
					first_answer.col = j;
				}
			}
			j++;
		}
		i++;
	}
	return (first_answer);
}
