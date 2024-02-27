/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:37:46 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 12:22:58 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	num;

	num = 0;
	while (*str != '\0')
	{
		num++;
		str++;
	}
	return (num);
}

unsigned char	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	n;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	else
	{
		while (*dest != '\0')
		{
			dest++;
		}
		n = 0;
		while (*src != '\0' && n < size - dest_len - 1)
		{
			*dest++ = *src++;
			n++;
		}
		*dest = '\0';
		return (dest_len + src_len);
	}
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		n;
	char	a[30] = "Hello";
	char	b[] = "World";
	char	c[30] = "Hello";
	char	d[] = "World";
	int		result;
	int		result0;
	char	a1[30] = "Hello";
	char	b1[] = "World";
	char	c1[30] = "Hello";
	char	d1[] = "World";
	int		result2;
	int		result3;

	n = 8;
	printf("s1 = %s\n", a);
	printf("s2 = %s\n", b);
	result = ft_strlcat(a, b, n);
	result0 = strlcat(c, d, n);
	printf("n = %i, result = %i, ans = %i\n\n", n, result, result0);
	n = 4;
	printf("s1 = %s\n", a1);
	printf("s2 = %s\n", b1);
	result2 = ft_strlcat(a1, b1, n);
	result3 = strlcat(c1, d1, n);
	printf("n = %i, result = %i, ans = %i\n\n", n, result2, result3);
}
*/