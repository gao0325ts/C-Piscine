/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_answer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:49:12 by stakada           #+#    #+#             */
/*   Updated: 2024/02/28 22:03:43 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	put_answer(t_map output)
{
	int	i;
	int	j;

	i = 0;
	while (i < output.rows)
	{
		j = 0;
		while (j < ft_strlen(output.point[i]))
		{
			write(1, &output.point[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
