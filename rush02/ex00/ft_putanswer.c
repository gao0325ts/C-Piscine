/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putanswer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakami <yakami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:08:08 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 16:36:36 by yakami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ftt_strcpy(char *dest, char *src)
{
	int	n;
	int	p;

	n = 0;
	p = 0;
	while (*(src + n))
		n++;
	while (p < n)
	{
		*(dest + p) = *(src + p);
		p++;
	}
	*(dest + p) = ' ';
	*(dest + p + 1) = '\0';
	return (dest);
}

char	*ft_catstr(char *str, char *srcs)
{
	int		l;
	int		m;
	char	*dup;

	if (str == 0 || srcs == 0)
	{
		free (str);
		return (0);
	}
	l = ft_strlen(srcs);
	m = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (l + m + 2));
	if (dup == 0)
		return (0);
	ftt_strcpy(dup, str);
	ft_strcat(dup, srcs);
	free (str);
	return (dup);
}

char	*ft_putanswer_mini(unsigned long long num, char **box, char *str)
{
	if (num / 100 > 0)
	{
		str = ft_catstr(str, ft_searchdict(num / 100, box));
		str = ft_catstr(str, ft_searchdict(100, box));
		if (num % 100 != 0)
			str = ft_catstr(str, "and");
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
				str = ft_catstr2(str, "-");
				str = ft_catstr2(str, ft_searchdict(num % 10, box));
			}
		}
	}
	return (str);
}

int	ft_thpow(int n)
{
	unsigned int	ans;

	ans = 1;
	while (n > 0)
	{
		ans = ans * 1000;
		n--;
	}
	return (ans);
}

char	*ft_putanswer(unsigned long long num, char **box, int n, char *str)
{
	if (num < 1000)
	{
		str = ft_putanswer_mini(num, box, str);
		if (n > 0)
		{
			str = ft_catstr(str, ft_searchdict(ft_thpow(n), box));
			str = ft_catstr2(str, ",");
		}
		return (str);
	}
	str = ft_putanswer(num / 1000, box, n + 1, str);
	if (num % 1000 > 0)
		str = ft_putanswer_mini(num % 1000, box, str);
	if (n > 0 && num % 1000 != 0)
	{
		str = ft_catstr(str, ft_searchdict(ft_thpow(n), box));
		str = ft_catstr2(str, ",");
	}
	return (str);
}
