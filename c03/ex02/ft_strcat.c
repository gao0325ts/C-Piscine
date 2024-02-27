/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:19:29 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 12:32:24 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
  char a[50] = "Hello";
  char answer[50] = "Hello";
  char b[] = "world";

  printf("input1 = %s\n", a);
  printf("input2 = %s\n", b);

  ft_strcat(a, b);
  printf("output = %s\n", a);

  strcat(answer, b);
  printf("answer = %s\n", answer);

  return (0);
}
*/