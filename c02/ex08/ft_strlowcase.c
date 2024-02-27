/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:12:03 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 04:40:56 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
	return (str_start);
}

/*
#include <stdio.h>

int	main(void)
{
  char *result;
  char a[8] = "TEsT123";

  printf("input=%s\n", a);
  result = ft_strlowcase(a);
  printf("output=%s\n", a);
}
*/