/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:44:03 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 19:19:23 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_free(char *ans, char **box)
{
	int	n;

	n = 0;
	if (box != 0)
	{
		while (*(box + n))
		{
			free (*(box + n));
			n++;
		}
	}
	free(box);
	free(ans);
}

void	ft_free2(char **box)
{
	int	n;

	n = 0;
	if (box != 0)
	{
		while (*(box + n))
		{
			free (*(box + n));
			n++;
		}
	}
	free(box);
}

int	ft_no(int rc, char **box, char *str)
{
	if (rc == 0)
	{
		ft_putstr(ft_searchdict(0, box));
		ft_free (str, box);
		return (0);
	}
	if (box == 0 || check_dict(box) == 1)
	{
		ft_free(str, box);
		write(1, "Dict Error\n", 10);
		return (0);
	}
	return (1);
}

void	no_argument(char *str)
{
	char				*ans;
	unsigned long long	rc;
	char				buf[BUF_SIZE + 1];
	char				**box;

	rc = read(STDIN_FILENO, buf, BUF_SIZE);
	*(buf + rc) = '\0';
	box = ft_make_dictstr(DICT);
	if (ft_checknumber(buf) == 0 || *buf == '\0' || box == 0)
	{
		ft_free(str, box);
		if (box == 0)
			write(1, "Dict Error\n", 10);
		else
			write(1, "Error\n", 5);
		return ;
	}
	rc = ft_atoi(buf);
	if (ft_no(rc, box, str) == 0)
		return ;
	ans = ft_putanswer(rc, box, 0, str);
	ft_owari(ans);
	ft_free (ans, box);
}
