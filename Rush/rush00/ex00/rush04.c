/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:39:50 by kenkato           #+#    #+#             */
/*   Updated: 2024/02/10 13:30:09 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, char left, char middle, char right)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		if (width == 1)
		{
			ft_putchar(left);
		}
		else if (width == x)
		{
			ft_putchar(right);
		}
		else
		{
			ft_putchar(middle);
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	height;

	height = 1;
	while (height <= y)
	{
		if (height == 1)
		{
			ft_print(x, 'A', 'B', 'C');
		}
		else if (height == y)
		{
			ft_print(x, 'C', 'B', 'A');
		}
		else
		{
			ft_print(x, 'B', ' ', 'B');
		}
		height++;
		ft_putchar('\n');
	}
}
