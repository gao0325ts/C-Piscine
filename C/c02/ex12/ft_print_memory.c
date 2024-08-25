/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 04:01:14 by stakada           #+#    #+#             */
/*   Updated: 2024/02/20 22:10:39 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char_as_dot(unsigned char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	print_address(unsigned long addr)
{
	char	buffer[19];
	int		i;

	i = 15;
	buffer[18] = '\0';
	buffer[17] = ' ';
	buffer[16] = ':';
	while (i >= 0)
	{
		buffer[i] = "0123456789abcdef"[addr & 0xF];
		addr >>= 4;
		i--;
	}
	write(1, buffer, 18);
}

void	print_hex_byte_or_space(unsigned int i, unsigned int j,
		unsigned int size, unsigned char *bytes)
{
	char	output[4];

	if (i + j < size)
	{
		output[0] = "0123456789abcdef"[bytes[i + j] >> 4];
		output[1] = "0123456789abcdef"[bytes[i + j] & 0x0F];
		if (j % 2 == 1)
		{
			output[2] = ' ';
			write(1, output, 3);
		}
		else
			write(1, output, 2);
	}
	else
	{
		write(1, "  ", 2);
		if (j % 2 == 1)
			write(1, " ", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*bytes;
	unsigned int	i;
	unsigned int	j;

	bytes = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_address((unsigned long)(bytes + i));
		j = -1;
		while (++j < 16)
			print_hex_byte_or_space(i, j, size, bytes);
		j = -1;
		while (++j < 16)
		{
			if (i + j < size)
				print_char_as_dot(bytes[i + j]);
		}
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	ft_print_memory("Bonjour les aminches\x09\x0a\x09\x63\x07 est fou
	\x09tout\x09\x63\x65 qu on peut faire avec\x09\x0a\x09print_memory
	\x0a\x0a\x0a\x09lol.lol\x0a\x20", 92);
}
*/