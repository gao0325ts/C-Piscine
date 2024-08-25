/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:54:24 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/12 17:15:27 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*(str + n))
		n++;
	return (n);
}

// #include <stdio.h>

// int main()
// {
// 	char* str = "asaaaas";

// 	printf("%d\n", ft_strlen(str));
// }