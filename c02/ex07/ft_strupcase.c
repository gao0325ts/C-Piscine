/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:02:50 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 02:18:15 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (str_start);
}

/*
#include <stdio.h>

int	main(void)
{
  char *result;
  char a[8] = "tEst123";

  printf("input=%s\n", a);
  result = ft_strupcase(a);
  printf("output=%s\n", a);
}
*/