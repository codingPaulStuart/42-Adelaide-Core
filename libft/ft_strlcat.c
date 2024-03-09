/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:01:29 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/09 14:23:47 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenates 2 strings, (*dst) and (*src) with a limitation put on it using
// dstsize parameter, this helps with fix buffer overflow

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	i;
	int		re;

	x = ft_strlen(dst);
	re = ft_strlen(src);
	if (dstsize <= x)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (x < dstsize - 1 && src[i] != '\0')
	{
		dst[x] = src[i];
		x++;
		i++;
	}
	dst[x] = '\0';
	return (ft_strlen(dst) + re - i);
}
