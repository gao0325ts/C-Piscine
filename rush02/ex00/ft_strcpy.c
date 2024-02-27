/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:18:27 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/07 18:32:50 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;
	int	p;

	n = 0;
	p = 0;
	while (*(src + n))
		n++;
	while (p <= n)
	{
		*(dest + p) = *(src + p);
		p++;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char dest[] = "asdfghjkl";
// 	char src[] = "qwer";
// 	printf("%s\n", ft_strcpy(dest, src));
// }
