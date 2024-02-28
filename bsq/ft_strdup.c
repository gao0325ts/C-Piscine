/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motsubo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:40:53 by motsubo           #+#    #+#             */
/*   Updated: 2024/02/28 20:41:43 by motsubo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(src);
	new_str = NULL;
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, src);
	return (new_str);
}
