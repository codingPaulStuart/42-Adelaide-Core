/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:01:40 by pstuart           #+#    #+#             */
/*   Updated: 2022/03/09 14:31:10 by pstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Contents of string (*src) are copied into buffer (*dst), limitations for
// copy are used with parameter (dstsize), the size of the (src) is always 
// returned regarless of how many characters were copied

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if ((src == 0) || (dst == 0))
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while ((i < dstsize - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
