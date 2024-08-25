/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:58:09 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 16:18:02 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	skip(char *str, char *charset, int *p)
{
	int	n;
	int	m;
	int	che;

	n = 0;
	che = 1;
	while (che && *(str + *p))
	{
		che = 0;
		m = 0;
		while (*(charset + m))
		{
			if (*(str + *p) == *(charset + m))
			{
				che = 1;
				(*p)++;
				break ;
			}
			m++;
		}
	}
}

int	howmany(char *str, char *charset)
{
	int	n;
	int	m;
	int	count;

	n = 0;
	count = 1;
	skip(str, charset, &n);
	while (*(str + n))
	{
		m = -1;
		while (*(charset + m++ + 1))
		{
			if (*(str + n) == *(charset + m))
			{
				skip(str, charset, &n);
				if (*(str + n) == '\0')
					count--;
				count++;
				n--;
				break ;
			}
		}
		n++;
	}
	return (count);
}

void	ft_pustr2(char **box, int *p, int l, char *str)
{
	int	t;

	t = 0;
	*box = (char *)malloc(sizeof(char) * ((l - *p) + 1));
	if (*box == 0)
		return ;
	while (t < l - *p)
	{
		*((*box) + t) = *(str + t + *p);
		t++;
	}
	*(*box + t) = '\0';
	*p = l;
}

void	ft_putstr3(char **box, char *str, char *charset, int *p)
{
	int	l;
	int	m;
	int	c;

	c = 0;
	l = *p;
	while (*(str + l))
	{
		m = 0;
		while (*(charset + m))
		{
			if (*(str + l) == *(charset + m))
			{
				c = 1;
				break ;
			}
			m++;
		}
		if (c == 1)
			break ;
		l++;
	}
	ft_pustr2(box, p, l, str);
	skip(str, charset, p);
}

char	**ft_split(char *str, char *charset)
{
	int		n;
	int		l;
	int		p;
	char	**box;

	n = 0;
	p = 0;
	l = howmany(str, charset);
	skip(str, charset, &p);
	if (*(str + p) == '\0')
		l = 0;
	box = (char **)malloc(sizeof(char *) * (l + 1));
	if (box == 0)
		return (0);
	while (n < l)
	{
		ft_putstr3(box + n, str, charset, &p);
		n++;
	}
	*(box + l) = 0;
	return (box);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char *str1 = "Machida is in Kanagawa";
//     char *charset1 = " ";
//     char **result1 = ft_split(str1, charset1);

//     printf("Test 1\n");
//     for (int i = 0; result1[i] != NULL; i++) {
//         printf("box %d: %s\n", i, result1[i]);
//         free(result1[i]);
//     }
// 	free(result1);
// 	str1 = "   Machida is in Kanagawa";
//     charset1 = " ";
//     result1 = ft_split(str1, charset1);

//     printf("Test 2\n");
//     for (int i = 0; result1[i] != NULL; i++) {
//         printf("box %d: %s\n", i, result1[i]);
//         free(result1[i]);
//     }
// 	free(result1);
// 	str1 = "Machida is in Kanagawa   ";
//     charset1 = " ";
//     result1 = ft_split(str1, charset1);

//     printf("Test 3\n");
//     for (int i = 0; result1[i] != NULL; i++) {
//         printf("box %d: %s\n", i, result1[i]);
//         free(result1[i]);
//     }
// 	free(result1);
// 	str1 = "       ";
//     charset1 = " ";
//     result1 = ft_split(str1, charset1);

//     printf("Test 4\n");
//     for (int i = 0; result1[i] != NULL; i++) {
//         printf("box %d: %s\n", i, result1[i]);
//         free(result1[i]);
//     }
// 	free(result1);//test4はboxが表示されてはならない
//     return 0;
// }
