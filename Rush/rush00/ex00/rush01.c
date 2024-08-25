/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:55:37 by stakada           #+#    #+#             */
/*   Updated: 2024/02/10 15:21:47 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	is_print_slash(int tate_now, int tate_max, int yoko_now, int yoko_max)
{
	if ((tate_now == 0) && (yoko_now == 0))
	{
		ft_putchar('/');
	}
	else if ((tate_now == 0) && (yoko_now == yoko_max))
	{
		ft_putchar('\\');
	}
	else if ((tate_now == tate_max) && (yoko_now == 0))
	{
		ft_putchar('\\');
	}
	else if ((tate_now == tate_max) && (yoko_now == yoko_max))
	{
		ft_putchar('/');
	}
}

int	is_print_ast(int tate_now, int tate_max, int yoko_now, int yoko_max)
{
	if ((tate_now == 0 || tate_now == tate_max) && (yoko_now >= 0
			&& yoko_now < yoko_max))
		return (0);
	else if ((tate_now > 0 && tate_now < tate_max) && (yoko_now == 0
			|| yoko_now == yoko_max))
	{
		return (0);
	}
	else
		return (1);
}

void	ft_print(int tate_cnt, int y, int yoko_cnt, int x)
{
	is_print_slash(tate_cnt, y - 1, yoko_cnt, x - 1);
	if (is_print_ast(tate_cnt, y - 1, yoko_cnt, x - 1) == 0)
	{
		if ((tate_cnt > 0 && tate_cnt < y - 1 && yoko_cnt == x - 1 && x != 1))
		{
			ft_putchar(' ');
			ft_putchar('*');
		}
		else
			ft_putchar('*');
	}
	else
		ft_putchar(' ');
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
