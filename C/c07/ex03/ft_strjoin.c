/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 05:12:04 by stakada           #+#    #+#             */
/*   Updated: 2024/02/21 13:39:48 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		num++;
		str++;
	}
	return (num);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*strcat_all(int size, char *result, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_length;
	int		sep_length;
	char	*result;

	total_length = 1;
	sep_length = ft_strlen(sep);
	result = NULL;
	if (size == 0)
		return ((char *)malloc(1));
	i = -1;
	while (++i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += sep_length;
	}
	result = (char *)malloc(total_length + 1);
	*result = '\0';
	result = strcat_all(size, result, strs, sep);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strings[] = {"This", "is", "a", "test"};
	char	*separator;
	int		size;
	char	*result;

	separator = "111";
	size = sizeof(strings) / sizeof(strings[0]);
	result = ft_strjoin(size, strings, separator);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
}
*/