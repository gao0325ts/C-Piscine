/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:45:20 by stakada           #+#    #+#             */
/*   Updated: 2024/02/25 18:03:28 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_dict(char **dict_box)
{
	int	i;
	int	j;
	int	is_include_colon;

	if (is_dict_printable(dict_box) == 1)
		return (1);
	i = 0;
	while (dict_box[i])
	{
		j = 0;
		is_include_colon = 0;
		while (dict_box[i][j])
		{
			if (dict_box[i][j] == ':')
			{
				is_include_colon = 1;
				break ;
			}
			j++;
		}
		if (!is_include_colon)
			return (1);
		i++;
	}
	return (0);
}
