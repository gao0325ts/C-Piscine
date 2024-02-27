/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:18:00 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 04:52:40 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*a;
	char	b[13];

	a = "copythistext";
	printf("src=%s\n", a);
	ft_strcpy(b, a);
	printf("dest=%s\n", b);
	return (0);
}
*/