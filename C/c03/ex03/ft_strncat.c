/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:29:32 by stakada           #+#    #+#             */
/*   Updated: 2024/02/13 12:30:01 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
  char dest[50] = "Hello";
  char answer[50] = "Hello";
	char			*src;
	unsigned int	n;

  src = "world";
  n = 3;
  printf("Before: %s\n", dest);
  ft_strncat(dest, src, n);
  strncat(answer, src, n);
  printf("After: %s\nAnswer: %s\n", dest, answer);
  return (0);
}
*/