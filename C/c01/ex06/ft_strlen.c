/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:07:04 by stakada           #+#    #+#             */
/*   Updated: 2024/02/14 14:03:59 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b;
	char *c = "HelloWorld";
	a = ft_strlen(c);
	printf("str = %s\nresult = %d\n", c, a);
	b = strlen(c);
	printf("answer = %d", b);
}
*/