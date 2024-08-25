/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 02:52:05 by stakada           #+#    #+#             */
/*   Updated: 2024/02/21 15:15:13 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*result;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		result[i] = min++;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
  int i = 0;
	int min = 3;
	int max = 35;
	int *arr = ft_range(min, max);
  while (i < (max - min))
    printf("%d ", arr[i++]);
  printf("\n");
  free(arr);
  return (0);
}
*/