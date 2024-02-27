/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 04:36:43 by stakada           #+#    #+#             */
/*   Updated: 2024/02/18 17:18:36 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	up_to_down(int boxes[4][4], int i, int views[4][4]);
int	down_to_up(int boxes[4][4], int i, int views[4][4]);
int	left_to_right(int boxes[4][4], int i, int views[4][4]);
int	right_to_left(int boxes[4][4], int i, int views[4][4]);

int	check(int boxes[4][4], int views[4][4])
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (!up_to_down(boxes, i, views))
			return (0);
		if (!down_to_up(boxes, i, views))
			return (0);
		if (!left_to_right(boxes, i, views))
			return (0);
		if (!right_to_left(boxes, i, views))
			return (0);
	}
	return (1);
}

int	up_to_down(int boxes[4][4], int col, int views[4][4])
{
	int	row;
	int	count;
	int	max;

	row = 0;
	count = 1;
	max = boxes[0][col];
	while (++row < 4)
	{
		if (boxes[row][col] > max)
		{
			max = boxes[row][col];
			count++;
		}
	}
	if (count != views[0][col])
		return (0);
	return (1);
}

int	down_to_up(int boxes[4][4], int col, int views[4][4])
{
	int	row;
	int	count;
	int	max;

	row = 0;
	count = 1;
	max = boxes[3][col];
	while (++row < 4)
	{
		if (boxes[3 - row][col] > max)
		{
			max = boxes[3 - row][col];
			count++;
		}
	}
	if (count != views[1][col])
		return (0);
	return (1);
}

int	left_to_right(int boxes[4][4], int row, int views[4][4])
{
	int	col;
	int	count;
	int	max;

	col = 0;
	count = 1;
	max = boxes[row][0];
	while (++col < 4)
	{
		if (boxes[row][col] > max)
		{
			max = boxes[row][col];
			count++;
		}
	}
	if (count != views[2][row])
		return (0);
	return (1);
}

int	right_to_left(int boxes[4][4], int row, int views[4][4])
{
	int	col;
	int	count;
	int	max;

	col = 0;
	count = 1;
	max = boxes[row][3];
	while (++col < 4)
	{
		if (boxes[row][3 - col] > max)
		{
			max = boxes[row][3 - col];
			count++;
		}
	}
	if (count != views[3][row])
		return (0);
	return (1);
}
