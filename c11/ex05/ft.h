/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 22:51:38 by stakada           #+#    #+#             */
/*   Updated: 2024/02/26 23:22:55 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
void	put_division_error(void);
void	put_mod_error(void);
void	ft_add(int x, int y);
void	ft_subtract(int x, int y);
void	ft_divide(int x, int y);
void	ft_multiply(int x, int y);
void	ft_mod(int x, int y);

#endif