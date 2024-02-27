/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:25:29 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 11:26:37 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	src_len;

	count = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
	{
		return (src_len);
	}
	else
	{
		while (count < (size - 1) && *src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
			count++;
		}
		if (size > 0)
			*dest = '\0';
		return (src_len);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	unsigned int n;
	unsigned int m;
	char a[13] = "copythistext";
	char b[13];

	n = 0;
	m = ft_strlcpy(b, a, n);
	printf("n = %u\nsrc  = %s\ndest = %s\nm = %u\n\n", n, a, b, m);
	n = 5;
	m = ft_strlcpy(b, a, n);
	printf("n = %u\nsrc  = %s\ndest = %s\nm = %u\n\n", n, a, b, m);
	n = 10;
	m = ft_strlcpy(b, a, n);
	printf("n = %u\nsrc  = %s\ndest = %s\nm = %u\n\n", n, a, b, m);
	n = 16;
	m = ft_strlcpy(b, a, n);
	printf("n = %u\nsrc  = %s\ndest = %s\nm = %u\n\n", n, a, b, m);
}
*/