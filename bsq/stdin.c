/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:53:36 by stakada           #+#    #+#             */
/*   Updated: 2024/02/28 21:16:17 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*create_buffer(int size)
{
	char	*buf;

	buf = (char *)malloc(size);
	if (buf == NULL)
		print_error();
	return (buf);
}

void	copy_data(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

void	free_buffer(char *buf)
{
	if (buf != NULL)
		free(buf);
	else
		print_error();
}

char	*read_input(char *buf, int *buf_size, int *total, int bytes_read)
{
	char	*new_buf;

	while (1)
	{
		bytes_read = read(STDIN_FILENO, buf + *total, *buf_size - *total);
		if (bytes_read > 0)
		{
			*total += bytes_read;
			if (*total == *buf_size)
			{
				new_buf = malloc(*buf_size + BUF_SIZE);
				if (!new_buf)
					return (NULL);
				copy_data(new_buf, buf, *total);
				free(buf);
				buf = new_buf;
				*buf_size = *buf_size + BUF_SIZE;
			}
		}
		else if (bytes_read == 0)
			break ;
		else
			return (NULL);
	}
	return (buf);
}

void	read_stdin(void)
{
	int		buf_size;
	int		total_size;
	char	*buf;
	int		bytes_read;

	bytes_read = 0;
	buf_size = BUF_SIZE;
	total_size = 0;
	buf = create_buffer(buf_size);
	if (!buf)
		return ;
	buf = read_input(buf, &buf_size, &total_size, bytes_read);
	if (!buf)
	{
		free_buffer(buf);
		return ;
	}
	buf[total_size] = '\0';
	cut_in_rows(buf);
}
