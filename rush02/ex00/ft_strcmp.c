/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:48:19 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/08 17:53:47 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (*(s1 + n))
	{
		if (*(s1 + n) < *(s2 + n))
			return (-1);
		if (*(s1 + n) > *(s2 + n))
			return (1);
		n++;
	}
	if (*(s1 + n) < *(s2 + n))
		return (-1);
	if (*(s1 + n) > *(s2 + n))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_strcmp("", ""));
// }