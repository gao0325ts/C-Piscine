/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:13:16 by stakada           #+#    #+#             */
/*   Updated: 2024/02/12 16:52:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	toggle_case1(char *str)
{
	if ((*str >= 'a') && (*str <= 'z'))
		*str -= 32;
}

void	toggle_case2(char *str)
{
	if ((*str >= 'A') && (*str <= 'Z'))
		*str += 32;
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		cap_next;

	start = str;
	cap_next = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (cap_next == 1)
				toggle_case1(str);
			else if (cap_next == 0)
				toggle_case2(str);
			cap_next = 0;
		}
		else if ((*str >= '0') && (*str <= '9'))
			cap_next = 0;
		else
			cap_next = 1;
		str++;
	}
	return (start);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*result;
	char	a[61] = "salut, comMent tu vas ? 42mots";

	printf("input  = %s\n", a);
	result = ft_strcapitalize(a);
	printf("result = %s\n", result);
}
*/