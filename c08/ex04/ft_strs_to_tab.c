/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:06:49 by stakada           #+#    #+#             */
/*   Updated: 2024/02/22 13:17:59 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		num++;
		str++;
	}
	return (num);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(src);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, src);
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
		{
			while (i-- > 0)
				free(arr[i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
/*
int	main(int argc, char **argv)
{
	t_stock_str *strs;

	if (argc > 1)
	{
		strs = ft_strs_to_tab(argc - 1, argv + 1);
		if (strs != NULL)
		{
			ft_show_tab(strs);

			int i = 0;
			while (i < argc - 1)
			{
				free(strs[i].copy);
				i++;
			}
			free(strs);
		}
		return (0);
	}
}
*/
