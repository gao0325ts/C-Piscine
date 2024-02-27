/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:20:42 by stakada           #+#    #+#             */
/*   Updated: 2024/02/22 00:17:06 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	word_length(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !is_in_charset(str[len], charset))
		len++;
	return (len);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**result;
	int		i;
	int		j;
	int		len;

	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	i = -1;
	if (!result)
		return (NULL);
	while (++i < words)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		len = word_length(str, charset);
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		j = 0;
		while (j < len)
			result[i][j++] = *str++;
		result[i][j] = '\0';
	}
	result[words] = 0;
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*charset1;
	char	**result1;

	str1 = "Machida is in Kanagawa";
	charset1 = " ";
	result1 = ft_split(str1, charset1);
	printf("Test 1\n");
	for (int i = 0; result1[i] != NULL; i++)
	{
		printf("box %d: %s\n", i, result1[i]);
		free(result1[i]);
	}
	free(result1);
	str1 = "   Machida is in Kanagawa";
	charset1 = " ";
	result1 = ft_split(str1, charset1);
	printf("Test 2\n");
	for (int i = 0; result1[i] != NULL; i++)
	{
		printf("box %d: %s\n", i, result1[i]);
		free(result1[i]);
	}
	free(result1);
	str1 = "Machida is in Kanagawa   ";
	charset1 = " ";
	result1 = ft_split(str1, charset1);
	printf("Test 3\n");
	for (int i = 0; result1[i] != NULL; i++)
	{
		printf("box %d: %s\n", i, result1[i]);
		free(result1[i]);
	}
	free(result1);
	str1 = "       ";
	charset1 = " ";
	result1 = ft_split(str1, charset1);
	printf("Test 4\n");
	for (int i = 0; result1[i] != NULL; i++)
	{
		printf("box %d: %s\n", i, result1[i]);
		free(result1[i]);
	}
	free(result1); // test4はboxが表示されてはならない
	return (0);
}
*/
