/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:49:13 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 14:12:52 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	tmp;
	int	i;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int *tab = (int *)malloc(sizeof(int) * 5);

	tab[0] = 0;
	tab[1] = 4;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 1;

	printf("input  = %i %i %i %i %i \n", tab[0], tab[1], tab[2], tab[3],
		tab[4]);
	ft_sort_int_tab(tab, 5);
	printf("output = %i %i %i %i %i \n", tab[0], tab[1], tab[2], tab[3],
		tab[4]);
	free(tab);
}
*/