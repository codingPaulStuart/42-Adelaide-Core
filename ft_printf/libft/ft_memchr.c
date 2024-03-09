/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:41:12 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/09 11:05:38 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Searches for the first occurrence of the character c (unsigned char) in the
// first n bytes of the string pointed to by the argument str

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		++i;
	}
	return (NULL);
}
