/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:39:40 by stakada           #+#    #+#             */
/*   Updated: 2024/02/18 13:57:54 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	n[4];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			n[0] = '\\';
			n[1] = "0123456789abcdef"[(*str >> 4) & 0xF];
			n[2] = "0123456789abcdef"[(*str) & 0xF];
			n[3] = '\0';
			write(1, n, 3);
		}
		str++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "Coucou\ntu vas bien ?";
	printf("%s\n", s);
	ft_putstr_non_printable(s);
}
*/