/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:10:28 by motsubo           #+#    #+#             */
/*   Updated: 2024/02/28 18:20:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	print_error(void)
{
	write(2, "map error\n", 10);
	return (1);
}
