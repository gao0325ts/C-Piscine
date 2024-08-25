/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:48:55 by motsubo           #+#    #+#             */
/*   Updated: 2024/02/28 23:14:01 by motsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	double_free(char **double_p, int i)
{
	while (i-- > 0)
		free(double_p[i]);
	free(double_p);
	return (1);
}

void	set_map(char **row, int len, int i)
{
	t_map	argument;

	argument.rows = get_map_rows(row[0], len);
	argument.full_char = row[0][len - 1];
	argument.obstacle_char = row[0][len - 2];
	argument.empty_char = row[0][len - 3];
	if (arrlen(row) < 2 && print_error())
		return ;
	argument.point = NULL;
	argument.point = (char **)malloc(sizeof(char *) * argument.rows);
	if (!argument.point)
		return ;
	i = -1;
	while (++i + 1 < arrlen(row))
	{
		argument.point[i] = ft_strdup(row[i + 1]);
		if (!argument.point[i])
		{
			if (double_free(argument.point, i))
				return ;
		}
	}
	if (!is_validate_map(argument, row) && print_error())
		return ;
	solve(argument, row);
}

void	cut_in_rows(char *str)
{
	int		i;
	char	**row;
	int		len;

	i = 1;
	while (str[i])
	{
		if ((str[i - 1] < 32 || str[i - 1] > 126) && str[i] == '\n'
			&& print_error())
			return ;
		i++;
	}
	if (str[i - 1] != '\n' && print_error())
		return ;
	row = ft_split(str, "\n");
	if (!row && print_error())
		return ;
	len = ft_strlen(row[0]);
	if (len < 4 && print_error())
		return ;
	i = 0;
	set_map(row, len, i);
}

void	read_size_of_file(char *argv_1)
{
	int	fd;
	int	size;
	int	buf[BUF_SIZE];
	int	buf_size;

	fd = 0;
	fd = open(argv_1, O_RDONLY);
	if (fd == -1 && print_error())
		return ;
	size = 1;
	buf_size = 0;
	while (size > 0)
	{
		size = read(fd, buf, BUF_SIZE);
		if (size == -1 && print_error())
		{
			close(fd);
			return ;
		}
		buf_size += size;
	}
	close(fd);
	ft_display_file(argv_1, buf_size);
}

void	ft_display_file(char *argv_1, int buf_size)
{
	int		fd;
	int		size;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * buf_size + 1);
	size = 0;
	fd = open(argv_1, O_RDONLY);
	size = read(fd, buf, buf_size);
	if (size == -1 && print_error())
	{
		close(fd);
		return ;
	}
	buf[size] = '\0';
	if ((buf[0] < 32 || buf[0] > 126) && print_error())
		return ;
	cut_in_rows(buf);
	close(fd);
}
