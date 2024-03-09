/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:48:20 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/10 15:48:54 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies Bytes from memory area src into dst, stopping after first occurrence
// of Byte c is copied, or after n Bytes are copied (whichever first)
// Returns pointer to the byte after the copying is complete

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = dst;
	while (++i < n)
	{
		*(ptr + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
