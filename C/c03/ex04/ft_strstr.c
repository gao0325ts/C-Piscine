/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:11:41 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 12:28:03 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			temp_str = str;
			temp_to_find = to_find;
			while (*temp_to_find != '\0' && *temp_str == *temp_to_find)
			{
				temp_str++;
				temp_to_find++;
			}
			if (*temp_to_find == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;
  char *result;
  char *answer;
  
  str1 = "42Tokyo 42toKyo 42tokyo";
  str2 = "42tokyo";
  result = ft_strstr(str1, str2);
  answer = strstr(str1, str2);
  printf("str1 = %s\nstr2 = %s\n", str1, str2);
  printf("result = %s, answer = %s\n", result, answer);
}
*/