/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:17:59 by stakada           #+#    #+#             */
/*   Updated: 2024/02/26 01:51:08 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = -1;
	ascending = 1;
	descending = 1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;
		else if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;
	}
	if (ascending || descending)
		return (1);
	return (0);
}
