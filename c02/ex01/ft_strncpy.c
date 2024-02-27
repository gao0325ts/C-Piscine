/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:04:04 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 15:42:15 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;
	char			*dest_start;

	count = 1;
	dest_start = dest;
	while (count <= n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	while (count <= n)
	{
		*dest = '\0';
		dest++;
		count++;
	}
	return (dest_start);
}

/*
#include <stdio.h>

int	main(void)
{
	unsigned int	n;
	char			a[13] = "copythistext\0";
	char			b[13];

	n = 5;
	ft_strncpy(b, a, n);
	printf("n=%d\nsrc=%s\ndest=%s\n\n", n, a, b);
	n = 10;
	ft_strncpy(b, a, n);
	printf("n=%d\nsrc=%s\ndest=%s\n\n", n, a, b);
	n = 20;
	ft_strncpy(b, a, n);
	printf("n=%d\nsrc=%s\ndest=%s\n", n, a, b);
	return (0);
}
*/