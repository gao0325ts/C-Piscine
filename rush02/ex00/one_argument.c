/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_argument.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:05:11 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 19:19:36 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_owari(char *ans)
{
	if (ans == 0)
	{
		write(1, "Dict Error", 10);
		return ;
	}
	ans = ft_spacedel(ans + 1);
	ft_putstr(ans);
}

int	checksome(int rc, char *str, char **box)
{
	if (rc == 0)
	{
		ft_putstr(ft_searchdict(0, box));
		ft_free (str, box);
		return (0);
	}
	if (check_dict(box))
	{
		ft_free(str, box);
		write(1, "Dict Error\n", 10);
		return (0);
	}
	return (1);
}

void	one_argument(char *num, char *str)
{
	char			*ans;
	char			**box;
	unsigned int	rc;

	rc = ft_atoi(num);
	box = ft_make_dictstr(DICT);
	if (ft_checknumber(num) == 0 || *num == '\0' || box == 0)
	{
		ft_free(str, box);
		if (box == 0)
			write(1, "Dict Error\n", 10);
		else
			write(1, "Error\n", 5);
		return ;
	}
	if (checksome(rc, str, box) == 0)
		return ;
	ans = ft_putanswer(rc, box, 0, str);
	ft_owari(ans);
	ft_free (ans, box);
}

char	*ft_pr_or_en(char *dict, char **box, unsigned int rc, char *str)
{
	if (ft_strcmp(dict, "numbers_pt.dict") == 0)
		return (ft_putanswerpr(rc, box, 0, str));
	else
		return (ft_putanswer(rc, box, 0, str));
}

void	two_argument(char *num, char *dict, char *str)
{
	char			*ans;
	char			**box;
	unsigned int	rc;

	rc = ft_atoi(num);
	box = ft_make_dictstr(dict);
	if (ft_checknumber(num) == 0 || *num == '\0' || box == 0)
	{
		ft_free(str, box);
		if (box == 0)
			write(1, "Dict Error\n", 10);
		else
			write(1, "Error\n", 5);
		return ;
	}
	if (checksome(rc, str, box) == 0)
		return ;
	ans = ft_pr_or_en(dict, box, rc, str);
	ft_owari(ans);
	ft_free (ans, box);
}
