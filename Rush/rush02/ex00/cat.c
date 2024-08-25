/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:03:05 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 18:59:48 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ftt_strcpy2(char *dest, char *src)
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
	*(dest + p) = '\0';
	return (dest);
}

char	*ft_catstr2(char *str, char *srcs)
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
	dup = (char *)malloc(sizeof(char) * (l + m + 1));
	if (dup == 0)
		return (0);
	ftt_strcpy2(dup, str);
	ft_strcat(dup, srcs);
	free (str);
	return (dup);
}

int	checkend(char *str)
{
	int	n;

	n = 0;
	while (*(str + n))
		n++;
	if (*(str + n - 1) != '\n')
		return (0);
	return (1);
}
