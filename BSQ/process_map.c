/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:49:34 by motsubo           #+#    #+#             */
/*   Updated: 2024/02/28 23:07:15 by motsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_map_rows(char *str, int len)
{
	int		i;
	int		j;
	char	*row_str;
	int		rows;

	i = 0;
	row_str = NULL;
	row_str = (char *)malloc(sizeof(char) * (len - 3 + 1));
	i = len - 4;
	j = 0;
	while (i >= 0)
		row_str[j++] = str[i--];
	row_str[j] = '\0';
	rev_str(row_str, j);
	rows = ft_atoi(row_str);
	free(row_str);
	return (rows);
}

int	is_designated_char(char **point, t_map arg)
{
	int	i;
	int	j;

	i = -1;
	while (point[++i])
	{
		if (!ft_str_is_printable(point[i]))
			return (0);
		j = -1;
		while (point[i][++j])
		{
			if ((point[i][j] != arg.empty_char)
				&& (point[i][j] != arg.obstacle_char))
				return (0);
		}
	}
	return (1);
}

int	is_validate_map(t_map arg, char **row)
{
	int	i;

	if (arg.rows != arrlen(row) - 1)
		return (0);
	if ((arg.empty_char == arg.full_char || arg.empty_char == arg.obstacle_char
			|| arg.full_char == arg.obstacle_char))
		return (0);
	if (!is_designated_char(arg.point, arg))
		return (0);
	i = 0;
	while (++i < arrlen(arg.point))
	{
		if (ft_strlen(arg.point[i - 1]) != ft_strlen(arg.point[i]))
			return (0);
	}
	if (arg.point[i - 1][ft_strlen(arg.point[i - 1] - 1)] == '\n')
		return (0);
	if ((arg.empty_char < 32 || arg.empty_char > 126) || (arg.full_char < 32
			|| arg.full_char > 126) || (arg.obstacle_char < 32
			|| arg.obstacle_char > 126))
		return (0);
	return (1);
}
