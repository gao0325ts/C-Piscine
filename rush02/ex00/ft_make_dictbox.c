/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_dictbox.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:29:45 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 19:09:14 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_mlstr(char *str, int rc)
{
	int		n;
	char	*st;

	n = 0;
	st = (char *)malloc(sizeof(char) * (rc + 1));
	if (st == 0)
		return (0);
	while (n < rc)
	{
		*(st + n) = *(str + n);
		n++;
	}
	*(st + n) = '\0';
	return (st);
}

char	**ft_mallocstr(char ***box, char *str, int rc)
{
	int		n;
	int		m;
	char	*st;
	char	**box_copy;

	n = 0;
	st = ft_mlstr(str, rc);
	if (st == 0)
		return (0);
	while (*(*box + n))
		n++;
	box_copy = (char **)malloc(sizeof(char *) * (n + 2));
	if (box_copy == 0)
		return (0);
	m = 0;
	while (m < n)
	{
		*(box_copy + m) = *(*box + m);
		m++;
	}
	*(box_copy + m) = st;
	*(box_copy + m + 1) = 0;
	free(*box);
	return (box_copy);
}

int	ft_errorput(char ***box)
{
	*box = (char **)malloc(sizeof(char *));
	if (*box == 0)
		return (0);
	return (1);
}

char	**ft_make_dictbox(char *dict)
{
	char	**box;
	char	buf[BUF_SIZE];
	int		fd;
	int		rc;

	if (ft_errorput(&box) == 0)
		return (0);
	*box = 0;
	rc = 1;
	fd = open(dict, O_RDONLY);
	while (rc && fd != -1)
	{
		rc = read(fd, buf, BUF_SIZE);
		if (rc == -1)
			return (0);
		box = ft_mallocstr(&box, buf, rc);
		if (box == 0)
			return (0);
	}
	close(fd);
	return (box);
}

char	**ft_make_dictstr(char *dict)
{
	char	**next;
	char	**box;
	char	*str;
	int		n;

	box = ft_make_dictbox(dict);
	if (box == 0)
		return (0);
	str = ft_strjoin(box);
	n = 0;
	while (*(box + n))
	{
		free (*(box + n));
		n++;
	}
	free (box);
	if (checkend(str) == 0)
	{
		free(str);
		return (0);
	}
	next = ft_split(str, "\n");
	free (str);
	return (next);
}

// int main()
// {
// 	char **box;
// 	box = ft_make_dictstr("test");
// 	while (*box)
// 	{
// 		printf("%s\n", *box);
// 		box++;
// 	}
// }
