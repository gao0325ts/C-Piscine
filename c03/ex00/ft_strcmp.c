/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 02:37:21 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 12:36:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = "Hello";
	char	*str3 = "Hell";
	char	*str4 = "World";
	int		answer;
	int		result;

	result = ft_strcmp(str1, str2);
	answer = strcmp(str1, str2);
	printf("s1 = %s, s2 = %s\n", str1, str2);
	printf("result = %d\n", result);
	printf("answer = %d\n", answer);

	result = ft_strcmp(str1, str3);
	answer = strcmp(str1, str3);
	printf("s1 = %s, s2 = %s\n", str1, str3);
	printf("result = %d\n", result);
	printf("answer = %d\n", answer);

	result = ft_strcmp(str1, str4);
	answer = strcmp(str1, str4);
	printf("s1 = %s, s2 = %s\n", str1, str4);
	printf("result = %d\n", result);
	printf("answer = %d\n", answer);

	return (0);
}
*/