/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:38:24 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 17:19:52 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
int	main(void)
{
	int	tab[7];
	int	*t;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 5;
	tab[6] = 6;
	t = tab;
	printf("input  = %i %i %i %i %i %i %i\n", tab[0], tab[1], tab[2], tab[3],
		tab[4], tab[5], tab[6]);
	ft_rev_int_tab(t, 7);
	printf("output = %i %i %i %i %i %i %i\n", tab[0], tab[1], tab[2], tab[3],
		tab[4], tab[5], tab[6]);
}
*/