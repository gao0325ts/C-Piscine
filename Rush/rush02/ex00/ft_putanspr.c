/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putanspr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:13:39 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 17:13:50 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_putanswer_minipr(unsigned int num, char **box, char *str)
{
	if (num / 100 > 0)
	{
		str = ft_catstr(str, ft_searchdict(num / 100, box));
		str = ft_catstr(str, ft_searchdict(100, box));
		if (num % 100 != 0)
			str = ft_catstr(str, "e");
	}
	if (num % 100 != 0)
	{
		if (num % 100 < 20)
			str = ft_catstr(str, ft_searchdict(num % 100, box));
		else
		{
			str = ft_catstr(str, ft_searchdict(num % 100 / 10 * 10, box));
			if (num % 10 != 0)
			{
				str = ft_catstr(str, "e");
				str = ft_catstr(str, ft_searchdict(num % 10, box));
			}
		}
	}
	return (str);
}

char	*ft_putanswerpr(unsigned long long num, char **box, int n, char *str)
{
	if (num < 1000)
	{
		str = ft_putanswer_minipr(num, box, str);
		if (n > 0)
		{
			str = ft_catstr(str, ft_searchdict(ft_thpow(n), box));
			str = ft_catstr2(str, ",");
		}
		return (str);
	}
	str = ft_putanswerpr(num / 1000, box, n + 1, str);
	if (num % 1000 > 0)
		str = ft_putanswer_minipr(num % 1000, box, str);
	if (n > 0 && num % 1000 != 0)
	{
		str = ft_catstr(str, ft_searchdict(ft_thpow(n), box));
		str = ft_catstr2(str, ",");
	}
	return (str);
}
