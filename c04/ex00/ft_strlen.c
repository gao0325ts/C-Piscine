/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:44:47 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 15:10:08 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str++ != '\0')
		num++;
	return (num);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
  char a[10] = "42Tokyo";
	char	*p;

  p = a;
  int result, answer;
  result = ft_strlen(p);
  answer = strlen(p);
  printf("result = %d\n", result);
  printf("answer = %d\n", answer);
  return (0);
}
*/