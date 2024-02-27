/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:30:13 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 17:21:52 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	m;
	int	k;

	m = 0;
	k = 0;
	while (*(dest + m))
		m++;
	while (*(src + k))
	{
		*(dest + m) = *(src + k);
		k++;
		m++;
	}
	*(dest + m) = '\0';
	return (dest);
}

void	ft_putan(char *str, int size, char **strs)
{
	int	n;
	int	q;

	n = 0;
	q = 0;
	while (n < size)
	{
		ft_strcat(str, *(strs + n));
		n++;
	}
}

int	ft_how(char **strs)
{
	int	n;

	n = 0;
	while (*(strs + n))
		n++;
	return (n);
}

int	ft_nono(int size, char **strs)
{
	int	count;
	int	q;

	count = 0;
	q = 0;
	while (q < size)
	{
		count = count + ft_strlen(*(strs + q));
		q++;
	}
	return (count);
}

char	*ft_strjoin(char **strs)
{
	int		q;
	int		size;
	int		count;
	char	*str;

	q = 0;
	size = ft_how(strs);
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		if (str == 0)
			return (0);
		*str = '\0';
		return (str);
	}
	count = ft_nono(size, strs);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == 0)
		return (0);
	*str = '\0';
	ft_putan(str, size, strs);
	*(str + count) = '\0';
	return (str);
}
