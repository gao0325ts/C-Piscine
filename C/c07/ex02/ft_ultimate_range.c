/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 03:14:24 by stakada           #+#    #+#             */
/*   Updated: 2024/02/21 15:05:36 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result;

	i = 0;
	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		result[i] = min++;
		i++;
	}
	*range = result;
	return (size);
}

/*
#include <stdio.h>

int	main(void)
{
	int i = 0;
	int min = 3;
	int max = 35;
	int *arr;
	int size = ft_ultimate_range(&arr, min, max);
	if (size == -1)
		printf("Error");
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
	free(arr);
	return (0);
}
*/