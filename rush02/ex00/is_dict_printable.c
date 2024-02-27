/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dict_printable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:43:27 by stakada           #+#    #+#             */
/*   Updated: 2024/02/25 18:26:35 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_dict_printable_helper(char *str, int is_not_printable)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if (str[k] == '\n' && str[k + 1] == '\0')
			break ;
		else if (str[k] == '\n')
			is_not_printable = 1;
		if ((str[k] >= 0 && str[k] <= 31) || str[k] == 127)
			is_not_printable = 1;
		k++;
	}
	if (is_not_printable)
		return (1);
	return (0);
}

int	is_dict_printable(char **box)
{
	int	i;
	int	j;
	int	is_not_printable;

	i = -1;
	while (box[++i])
	{
		j = 0;
		is_not_printable = 0;
		while (box[i][j] && box[i][j] != ':')
			j++;
		j++;
		while (box[i][j] && box[i][j] == ' ')
			j++;
		if (box[i][j] == '\0')
			return (1);
		if (is_dict_printable_helper(&box[i][j], is_not_printable))
			return (1);
	}
	return (0);
}
