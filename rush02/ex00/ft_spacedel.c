/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spacedel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:46:55 by stakada           #+#    #+#             */
/*   Updated: 2024/02/25 07:43:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_spacedel(char *str)
{
	int		i;
	int		j;
	char	*result;

	result = str;
	i = 0;
	j = 0;
	while (str[i])
	{
		str[j] = str[i];
		j++;
		if (str[i] == ' ')
		{
			while (str[i + 1] == ' ')
				i++;
		}
		i++;
	}
	if (str[j - 1] == ',')
		str[j - 1] = '\0';
	else
		str[j] = '\0';
	return (result);
}
