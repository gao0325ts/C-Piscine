/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:49:40 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/24 16:51:38 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (*(str + n))
		n++;
	write(1, str, n);
}

// int main()
// {
// 	char* str= "abcd";
// 	ft_putstr(str);
// }