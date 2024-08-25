/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:22:39 by stakada           #+#    #+#             */
/*   Updated: 2024/02/28 23:28:06 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_caculation(int ***caculation, int size)
{
	int	i;

	i = 0;
	if (!caculation || !*caculation)
		return ;
	while (i < size)
	{
		if ((*caculation)[i])
		{
			free((*caculation)[i]);
			(*caculation)[i] = NULL;
			i++;
		}
	}
	free(*caculation);
	*caculation = NULL;
}

void	replace_with_full_char(t_map arg, t_result first_answer)
{
	int	i;
	int	j;

	i = first_answer.row - first_answer.max + 1;
	while (i <= first_answer.row)
	{
		j = first_answer.col - first_answer.max + 1;
		while (j <= first_answer.col)
		{
			arg.point[i][j] = arg.full_char;
			j++;
		}
		i++;
	}
	put_answer(arg);
}

void	solve(t_map arg, char **row)
{
	int			i;
	t_result	result;
	int			**caculation;

	result.max = 0;
	result.row = 0;
	result.col = 0;
	caculation = (int **)malloc(sizeof(int *) * (arrlen(row) - 1));
	if (!caculation)
		return ;
	i = 0;
	while (i < arrlen(row) - 1)
	{
		caculation[i] = (int *)malloc(sizeof(int) * ft_strlen(arg.point[i]));
		if (!caculation[i])
		{
			free_caculation(&caculation, i);
			return ;
		}
		i++;
	}
	initialize_map(caculation, arg, row);
	replace_with_full_char(arg, find_answer(caculation, arg, result, row));
	free_caculation(&caculation, arrlen(row) - 1);
}
