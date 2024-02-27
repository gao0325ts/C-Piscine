/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:50:44 by stakada           #+#    #+#             */
/*   Updated: 2024/02/10 15:07:16 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	is_print_aorc(int tate_now, int tate_max, int yoko_now, int yoko_max)
{
	if ((yoko_now == 0) && (tate_now == 0 || tate_now == tate_max))
	{
		return (0);
	}
	else if ((yoko_now == yoko_max) && (tate_now == 0 || tate_now == tate_max))
	{
		return (1);
	}
	else
	{
		return (2);
	}
}

int	is_print_b(int yoko_now, int yoko_max)
{
	if (yoko_now == 0 || yoko_now == yoko_max)
		return (0);
	else
		return (1);
}

void	ft_print(int tate_cnt, int y, int yoko_cnt, int x)
{
	if (is_print_aorc(tate_cnt, y - 1, yoko_cnt, x - 1) == 0)
	{
		ft_putchar('A');
	}
	else if (is_print_aorc(tate_cnt, y - 1, yoko_cnt, x - 1) == 1)
	{
		ft_putchar('C');
	}
	else
	{
		if (tate_cnt == 0 || tate_cnt == y - 1)
			ft_putchar('B');
		else
		{
			if (is_print_b(yoko_cnt, x - 1) == 0)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	tate_cnt;
	int	yoko_cnt;

	tate_cnt = 0;
	while (tate_cnt < y)
	{
		yoko_cnt = 0;
		while (yoko_cnt < x)
		{
			ft_print(tate_cnt, y, yoko_cnt, x);
			yoko_cnt++;
		}
		ft_putchar('\n');
		tate_cnt++;
	}
}
