/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:42:18 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 12:36:22 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		s1++;
		s2++;
		count++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hell";
	char	*str3 = "World";
	int		result;
	int		answer;
	int 	x;

	x = 5;
	result = ft_strncmp(str1, str2, x);
	answer = strncmp(str1, str2, x);
	printf("s1 = %s, s2 = %s, n = %d\n", str1, str2, x);
	printf("result = %d\n", result);
	printf("answer = %d\n", answer);

	x = 4;
	result = ft_strncmp(str1, str2, x);
	answer = strncmp(str1, str2, x);
	printf("s1 = %s, s2 = %s, n = %d\n", str1, str2, x);
	printf("result = %d\n", result);
	printf("answer = %d\n", answer);

	x = 1;
	result = ft_strncmp(str1, str3, x);
	answer = strncmp(str1, str3, x);
	printf("s1 = %s, s2 = %s, n = %d\n", str1, str3, x);
	printf("result = %d\n", result);
	printf("answer = %d\n", answer);

	return (0);
}
*/