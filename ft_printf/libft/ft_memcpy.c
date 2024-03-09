/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:25:22 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 10:17:54 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies characters number of Bytes -n from memory areas src to dest
// Returns a pointer to destination (dest)

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		++i;
	}
	return (dst);
}
