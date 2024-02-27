/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakami <yakami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:41:38 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 19:26:58 by yakami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	main2(char *str, char **av, int ac)
{
	if (ac == 1)
	{
		no_argument(str);
		write(1, "\n", 1);
		return ;
	}
	if (ac == 2)
	{
		one_argument(*(av + 1), str);
		write(1, "\n", 1);
		return ;
	}
	if (ac == 3)
	{
		two_argument(*(av + 2), *(av + 1), str);
		write(1, "\n", 1);
		return ;
	}
}

int	main(int ac, char **av)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	if (str == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	*str = '\0';
	if (ac > 3)
	{
		free(str);
		write(1, "Error\n", 6);
		return (0);
	}
	main2(str, av, ac);
	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q rush-02");
// }