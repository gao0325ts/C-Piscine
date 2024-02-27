/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchdict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:09:22 by stakada           #+#    #+#             */
/*   Updated: 2024/02/25 18:01:25 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_searchdict(unsigned long long n, char **box)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (box[i])
	{
		j = 0;
		if (n == ft_atoi(&box[i][j]))
		{
			while (box[i][j] != ':')
				j++;
			j++;
			while (box[i][j] == ' ')
				j++;
			result = &box[i][j];
			return (result);
		}
		i++;
	}
	return (NULL);
}
